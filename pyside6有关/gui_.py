#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: gui_.py
    time: 2021/9/17 15:45
    software: PyCharm
..................................
"""
import os

from PySide6.QtCore import Signal as pyqtSignal

from PySide6.QtCore import Qt, QThread,QPoint
from PySide6.QtGui import QImage, QPixmap, QCursor, QColor, QFont, QEnterEvent, QPainter, QPen, QIcon, QAction
from PySide6.QtWidgets import QApplication, QWidget, QMessageBox, QMenu,  QHBoxLayout, QLabel, QSpacerItem, \
    QSizePolicy, QPushButton, QVBoxLayout

from gui import Ui_widget
import requests
from lxml import etree

# 样式
StyleSheet = """
/*标题栏*/
TitleBar {
	border-top-left-radius:10px;
	border-top-right-radius: 10px;
    background-color: rgb(213, 213, 213);
}
/*最小化最大化关闭按钮通用默认背景*/
#buttonMinimum,#buttonMaximum,#buttonClose {
    border: none;
    background-color: rgb(213, 213, 213);
}
/*悬停*/
#buttonMinimum:hover,#buttonMaximum:hover {
    background-color: rgb(213, 213, 213);
    color: white;
}
#buttonClose:hover {
    color: white;
}
/*鼠标按下不放*/
#buttonMinimum:pressed,#buttonMaximum:pressed {
    background-color: rgb(74, 74, 74);
}
#buttonClose:pressed {
    color: white;
    background-color: red;
}
QLabel{
	font: 75 11pt;
}
"""


class TitleBar(QWidget):
    # 窗口最小化信号
    windowMinimumed = pyqtSignal()
    # 窗口最大化信号
    windowMaximumed = pyqtSignal()
    # 窗口还原信号
    windowNormaled = pyqtSignal()
    # 窗口关闭信号
    windowClosed = pyqtSignal()
    # 窗口移动
    windowMoved = pyqtSignal(QPoint)

    def __init__(self, *args, **kwargs):
        super(TitleBar, self).__init__(*args, **kwargs)
        # 支持qss设置背景
        self.setAttribute(Qt.WA_StyledBackground, True)
        self.mPos = None
        self.iconSize = 20  # 图标的默认大小
        # 设置默认背景颜色,否则由于受到父窗口的影响导致透明
        self.setAutoFillBackground(True)
        palette = self.palette()
        palette.setColor(palette.Window, QColor(240, 240, 240))
        self.setPalette(palette)
        # 布局
        layout = QHBoxLayout(self, spacing=0)
        layout.setContentsMargins(0, 0, 0, 0)
        # 窗口图标
        self.iconLabel = QLabel(self)
        #         self.iconLabel.setScaledContents(True)
        layout.addWidget(self.iconLabel)
        # 窗口标题
        self.titleLabel = QLabel(self)
        self.titleLabel.setMargin(2)
        layout.addWidget(self.titleLabel)
        # 中间伸缩条
        layout.addSpacerItem(QSpacerItem(
            40, 20, QSizePolicy.Expanding, QSizePolicy.Minimum
        )
        )
        # 利用Webdings字体来显示图标
        font = self.font() or QFont()
        font.setFamily('Webdings')
        # 最小化按钮
        self.buttonMinimum = QPushButton(
            '0', self, clicked=self.windowMinimumed.emit, font=font, objectName='buttonMinimum'
        )
        layout.addWidget(self.buttonMinimum)
        # 最大化/还原按钮
        self.buttonMaximum = QPushButton(
            '1', self, clicked=self.showMaximized, font=font, objectName='buttonMaximum'
        )
        layout.addWidget(self.buttonMaximum)
        # 关闭按钮
        self.buttonClose = QPushButton(
            'r', self, clicked=self.windowClosed.emit, font=font, objectName='buttonClose'
        )
        layout.addWidget(self.buttonClose)
        # 初始高度
        self.setHeight()

    def showMaximized(self):
        if self.buttonMaximum.text() == '1':
            # 最大化
            self.buttonMaximum.setText('2')
            self.windowMaximumed.emit()
        else:  # 还原
            self.buttonMaximum.setText('1')
            self.windowNormaled.emit()

    def setHeight(self, height=38):
        """设置标题栏高度"""
        self.setMinimumHeight(height)
        self.setMaximumHeight(height)
        # 设置右边按钮的大小
        self.buttonMinimum.setMinimumSize(height, height)
        self.buttonMinimum.setMaximumSize(height, height)
        self.buttonMaximum.setMinimumSize(height, height)
        self.buttonMaximum.setMaximumSize(height, height)
        self.buttonClose.setMinimumSize(height, height)
        self.buttonClose.setMaximumSize(height, height)

    def setTitle(self, title):
        """设置标题"""
        self.titleLabel.setText(title)

    def setIcon(self, icon):
        """设置图标"""
        self.iconLabel.setPixmap(icon.pixmap(self.iconSize, self.iconSize))

    def setIconSize(self, size):
        """设置图标大小"""
        self.iconSize = size

    def enterEvent(self, event):
        self.setCursor(Qt.ArrowCursor)
        super(TitleBar, self).enterEvent(event)

    def mouseDoubleClickEvent(self, event):
        super(TitleBar, self).mouseDoubleClickEvent(event)
        self.showMaximized()

    def mousePressEvent(self, event):
        """鼠标点击事件"""
        if event.button() == Qt.LeftButton:
            self.mPos = event.pos()
        event.accept()

    def mouseReleaseEvent(self, event):
        '''鼠标弹起事件'''
        self.mPos = None
        event.accept()

    def mouseMoveEvent(self, event):
        if event.buttons() == Qt.LeftButton and self.mPos:
            self.windowMoved.emit(self.mapToGlobal(event.pos() - self.mPos))
        event.accept()


# 枚举左上右下以及四个定点
Left, Top, Right, Bottom, LeftTop, RightTop, LeftBottom, RightBottom = range(8)


class FramelessWindow(QWidget):
    # 四周边距
    Margins = 5

    def __init__(self, *args, **kwargs):
        super(FramelessWindow, self).__init__(*args, **kwargs)

        self._pressed = False
        self.Direction = None
        # 背景透明
        self.setAttribute(Qt.WA_TranslucentBackground, True)
        # 无边框
        self.setWindowFlags(Qt.FramelessWindowHint)  # 隐藏边框
        # 鼠标跟踪
        self.setMouseTracking(True)
        # 布局
        layout = QVBoxLayout(self, spacing=0)
        # 预留边界用于实现无边框窗口调整大小
        layout.setContentsMargins(
            self.Margins, self.Margins, self.Margins, self.Margins
        )
        # 标题栏
        self.titleBar = TitleBar(self)
        layout.addWidget(self.titleBar)
        # 信号槽
        self.titleBar.windowMinimumed.connect(self.showMinimized)
        self.titleBar.windowMaximumed.connect(self.showMaximized)
        self.titleBar.windowNormaled.connect(self.showNormal)
        self.titleBar.windowClosed.connect(self.close)
        self.titleBar.windowMoved.connect(self.move)
        self.windowTitleChanged.connect(self.titleBar.setTitle)
        self.windowIconChanged.connect(self.titleBar.setIcon)

    def setTitleBarHeight(self, height=38):
        """设置标题栏高度"""
        self.titleBar.setHeight(height)

    def setIconSize(self, size):
        """设置图标的大小"""
        self.titleBar.setIconSize(size)

    def setWidget(self, widget):
        """设置自己的控件"""
        if hasattr(self, '_widget'):
            return
        self._widget = widget
        # 设置默认背景颜色,否则由于受到父窗口的影响导致透明
        self._widget.setAutoFillBackground(True)
        palette = self._widget.palette()
        palette.setColor(palette.Window, QColor(240, 240, 240))
        self._widget.setPalette(palette)
        self._widget.installEventFilter(self)
        self.layout().addWidget(self._widget)

    def move(self, pos):
        if self.windowState() == Qt.WindowMaximized or self.windowState() == Qt.WindowFullScreen:
            # 最大化或者全屏则不允许移动
            return
        super(FramelessWindow, self).move(pos)

    def showMaximized(self):
        """最大化,要去除上下左右边界,如果不去除则边框地方会有空隙"""
        super(FramelessWindow, self).showMaximized()
        self.layout().setContentsMargins(0, 0, 0, 0)

    def showNormal(self):
        """还原,要保留上下左右边界,否则没有边框无法调整"""
        super(FramelessWindow, self).showNormal()
        self.layout().setContentsMargins(
            self.Margins, self.Margins, self.Margins, self.Margins
        )

    def eventFilter(self, obj, event):
        """事件过滤器,用于解决鼠标进入其它控件后还原为标准鼠标样式"""
        if isinstance(event, QEnterEvent):
            self.setCursor(Qt.ArrowCursor)
        return super(FramelessWindow, self).eventFilter(obj, event)

    def paintEvent(self, event):
        """由于是全透明背景窗口,重绘事件中绘制透明度为1的难以发现的边框,用于调整窗口大小"""
        super(FramelessWindow, self).paintEvent(event)
        painter = QPainter(self)
        painter.setPen(QPen(QColor(255, 255, 255, 1), 2 * self.Margins))
        painter.drawRect(self.rect())

    def mousePressEvent(self, event):
        """鼠标点击事件"""
        super(FramelessWindow, self).mousePressEvent(event)
        if event.button() == Qt.LeftButton:
            self._mpos = event.pos()
            self._pressed = True

    def mouseReleaseEvent(self, event):
        '''鼠标弹起事件'''
        super(FramelessWindow, self).mouseReleaseEvent(event)
        self._pressed = False
        self.Direction = None

    def mouseMoveEvent(self, event):
        """鼠标移动事件"""
        super(FramelessWindow, self).mouseMoveEvent(event)
        pos = event.pos()
        xPos, yPos = pos.x(), pos.y()
        wm, hm = self.width() - self.Margins, self.height() - self.Margins
        if self.isMaximized() or self.isFullScreen():
            self.Direction = None
            self.setCursor(Qt.ArrowCursor)
            return
        if event.buttons() == Qt.LeftButton and self._pressed:
            self._resizeWidget(pos)
            return
        if xPos <= self.Margins and yPos <= self.Margins:
            # 左上角
            self.Direction = LeftTop
            self.setCursor(Qt.SizeFDiagCursor)
        elif wm <= xPos <= self.width() and hm <= yPos <= self.height():
            # 右下角
            self.Direction = RightBottom
            self.setCursor(Qt.SizeFDiagCursor)
        elif wm <= xPos and yPos <= self.Margins:
            # 右上角
            self.Direction = RightTop
            self.setCursor(Qt.SizeBDiagCursor)
        elif xPos <= self.Margins and hm <= yPos:
            # 左下角
            self.Direction = LeftBottom
            self.setCursor(Qt.SizeBDiagCursor)
        elif 0 <= xPos <= self.Margins and self.Margins <= yPos <= hm:
            # 左边
            self.Direction = Left
            self.setCursor(Qt.SizeHorCursor)
        elif wm <= xPos <= self.width() and self.Margins <= yPos <= hm:
            # 右边
            self.Direction = Right
            self.setCursor(Qt.SizeHorCursor)
        elif self.Margins <= xPos <= wm and 0 <= yPos <= self.Margins:
            # 上面
            self.Direction = Top
            self.setCursor(Qt.SizeVerCursor)
        elif self.Margins <= xPos <= wm and hm <= yPos <= self.height():
            # 下面
            self.Direction = Bottom
            self.setCursor(Qt.SizeVerCursor)

    def _resizeWidget(self, pos):
        """调整窗口大小"""
        if self.Direction == None:
            return
        mpos = pos - self._mpos
        xPos, yPos = mpos.x(), mpos.y()
        geometry = self.geometry()
        x, y, w, h = geometry.x(), geometry.y(), geometry.width(), geometry.height()
        if self.Direction == LeftTop:  # 左上角
            if w - xPos > self.minimumWidth():
                x += xPos
                w -= xPos
            if h - yPos > self.minimumHeight():
                y += yPos
                h -= yPos
        elif self.Direction == RightBottom:  # 右下角
            if w + xPos > self.minimumWidth():
                w += xPos
                self._mpos = pos
            if h + yPos > self.minimumHeight():
                h += yPos
                self._mpos = pos
        elif self.Direction == RightTop:  # 右上角
            if h - yPos > self.minimumHeight():
                y += yPos
                h -= yPos
            if w + xPos > self.minimumWidth():
                w += xPos
                self._mpos.setX(pos.x())
        elif self.Direction == LeftBottom:  # 左下角
            if w - xPos > self.minimumWidth():
                x += xPos
                w -= xPos
            if h + yPos > self.minimumHeight():
                h += yPos
                self._mpos.setY(pos.y())
        elif self.Direction == Left:  # 左边
            if w - xPos > self.minimumWidth():
                x += xPos
                w -= xPos
            else:
                return
        elif self.Direction == Right:  # 右边
            if w + xPos > self.minimumWidth():
                w += xPos
                self._mpos = pos
            else:
                return
        elif self.Direction == Top:  # 上面
            if h - yPos > self.minimumHeight():
                y += yPos
                h -= yPos
            else:
                return
        elif self.Direction == Bottom:  # 下面
            if h + yPos > self.minimumHeight():
                h += yPos
                self._mpos = pos
            else:
                return
        self.setGeometry(x, y, w, h)


class BarCode(QThread):
    data = pyqtSignal(dict)

    def __init__(self, mode, text):
        super(BarCode, self).__init__()
        self.mode = mode
        self.text = {'data': text}
        self.url = 'https://barcode.tec-it.com'
        self.time_out = 10

    def run(self):
        url = self.url + self.mode
        header = {
            'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/93.0.4577.82 Safari/537.36'
        }
        try:
            res = requests.get(url=url, headers=header, params=self.text, timeout=self.time_out)
            html = etree.HTML(res.text)
            url = html.xpath('//a[@class="fullButton downloadButton"]/@href')[0]
            res = requests.get(url=url, headers=header, timeout=self.time_out)
            self.data.emit({'code': 1, 'data': res.content})
        except requests.Timeout:
            self.data.emit({'code': 0, 'msg': '网页连接超时\n连接时间为：%s s\n尝试刷新' % str(self.time_out)})
        except requests.RequestException as e:
            self.data.emit({'code': 0, 'msg': '网页连接错误\n%s\n请检查更改输入的内容' % str(e)})


class GetManyMode(QThread):
    data = pyqtSignal(dict)

    def __init__(self):
        super(GetManyMode, self).__init__()
        self.url = 'https://barcode.tec-it.com/zh'
        self.header = {
            'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/93.0.4577.82 Safari/537.36'
        }
        self.time_out = 10

    def run(self):
        try:
            res = requests.get(url=self.url, headers=self.header, timeout=self.time_out)
            html = etree.HTML(res.text)
            name_list = html.xpath('//ul[@class="styled-list link-list"]/li/a/span/text()')
            class_list = html.xpath('//ul[@class="styled-list link-list"]/li/@class')
            dic = {}
            for i in range(len(name_list)):
                dic[name_list[i]] = class_list[i]
            for key, value in dic.items():
                call_run = False
                urls = html.xpath(f'//li[@class="{value}"]/ul/li/a/@href')
                names = html.xpath(f'//li[@class="{value}"]/ul/li/a/span/text()')
                if '#' in urls:
                    call_run = True
                    urls = html.xpath(f'//li[@class="{value}"]/ul/li/@class')
                dic_ = {}
                for i in range(len(names)):
                    dic_[names[i]] = urls[i]
                if call_run:
                    for _key, _value in dic_.items():
                        urls = html.xpath(f'//li[@class="{_value}"]/ul/li/a/@href')
                        names = html.xpath(f'//li[@class="{_value}"]/ul/li/a/span/text()')
                        _dic = {}
                        for i in range(len(names)):
                            _dic[names[i]] = urls[i]
                        dic_[_key] = _dic
                dic[key] = dic_
            del_list = ('Wi-Fi 条码', 'Event 条码', '名片', '银行和支付')
            for i in del_list:
                del dic[i]
            self.data.emit({'code': 1, 'dic': dic})
        except requests.Timeout:
            self.data.emit({'code': 0, 'msg': '网页连接超时\n连接时间为：%s s\n尝试刷新' % str(self.time_out)})
        except requests.RequestException as e:
            self.data.emit({'code': 0, 'msg': '网页连接错误\n%s\n可能软件已经失效了' % str(e)})


class main(QWidget, Ui_widget):
    def __init__(self, parent=None, *args, **kwargs):
        super().__init__(parent, *args, **kwargs)
        self.setAttribute(Qt.WA_StyledBackground, True)
        self.setupUi(self)

        self.pushButton_4.setEnabled(False)
        self.pushButton_2.setEnabled(False)
        self.pushButton_5.setEnabled(False)
        self.pushButton.setEnabled(False)
        self.img = None
        self.dic = {}
        self.dic2 = {}
        self.dic3 = {}

        # self.setWindowFlags(Qt.FramelessWindowHint)
        # self.setAutoFillBackground(False)
        # self.setAttribute(Qt.WA_TranslucentBackground, True)

        # 开放右键策略
        self.LabelSetMenu()

        self.stackedWidget.setCurrentIndex(1)

        self.refresh()

    def run(self):
        if self.stackedWidget.currentIndex():
            self.label_3.setText('选择方式为：\n%s\n输入内容为：\n%s\n正在生成条形码\n请耐心等待' % (
                self.comboBox_3.currentText(), self.lineEdit_2.text() if self.lineEdit_2.text() else None)
                                 )
            mode = self.dic2.get(self.comboBox_3.currentText())
            if mode:
                self.pushButton_5.setEnabled(False)
                if type(mode) == dict:
                    self.stackedWidget.setCurrentIndex(0)
                    return
                self.barcode = BarCode(mode, self.lineEdit_2.text())
                self.barcode.data.connect(self.main)
                self.barcode.start()
            else:
                self.label_3.setText('生成失败\n请先正确选择类型')
        else:
            self.label.setText('选择方式为：\n%s\n输入内容为：\n%s\n正在生成条形码\n请耐心等待' % (
                self.comboBox.currentText(), self.lineEdit.text() if self.lineEdit.text() else None)
                               )
            mode = self.dic3.get(self.comboBox.currentText())
            if mode:
                self.pushButton.setEnabled(False)
                self.barcode = BarCode(mode, self.lineEdit.text())
                self.barcode.data.connect(self.main)
                self.barcode.start()
                self.pushButton_3.setEnabled(False)
            else:
                self.label.setText('生成失败\n请先正确选择类型')

    def refresh(self):
        self.pushButton_6.setEnabled(False)
        self.getmanymode = GetManyMode()
        self.getmanymode.data.connect(self.Set)
        self.getmanymode.start()
        self.label_3.setText('正在获取所有类型')

    def type1(self, qstring):
        if self.dic.get(qstring, {}):
            self.dic2 = self.dic.get(qstring, {})
            self.comboBox_3.clear()
            for i in self.dic2.keys():
                self.comboBox_3.addItem(i)
            if qstring == '线性条码':
                self.comboBox_3.setCurrentIndex(7)
            self.comboBox_3.setStyleSheet('font: 12pt;color: rgb(0, 170, 0);background-color: rgb(48, 48, 48);')
        else:
            self.comboBox_3.setStyleSheet('font: 12pt;color: rgb(255, 0, 0);background-color: rgb(247, 247, 247);')
            self.comboBox_3.addItem('获取失败')

    def type2(self, qstring):
        self.pushButton_5.setText('开始生成')
        if type(self.dic2.get(qstring)) == dict:
            self.pushButton_5.setText('返回')
            self.stackedWidget.setCurrentIndex(0)
            self.dic3 = self.dic2.get(qstring, {})
            self.comboBox.clear()
            for i in self.dic3.keys():
                self.comboBox.addItem(i)
            self.comboBox.setStyleSheet('font: 12pt;color: rgb(0, 170, 0);background-color: rgb(48, 48, 48);')
            self.pushButton.setEnabled(True)

    def Set(self, data):
        if data.get('code'):
            self.comboBox_2.clear()
            self.dic = data.get('dic')
            for i in self.dic.keys():
                self.comboBox_2.addItem(i)
            self.comboBox_2.setStyleSheet('font: 12pt;color: rgb(0, 170, 0);background-color: rgb(48, 48, 48);')
            self.label_3.setText('准备完成\n选择类型后输入\n生成条形码')
            self.pushButton_5.setEnabled(True)
        else:
            self.comboBox.setStyleSheet('font: 12pt;color: rgb(255, 0, 0);background-color: rgb(247, 247, 247);')
            self.comboBox.addItem('获取失败')
            self.comboBox_2.setStyleSheet('font: 12pt;color: rgb(255, 0, 0);')
            self.comboBox_2.addItem('获取失败')
            self.comboBox_3.setStyleSheet('font: 12pt;color: rgb(255, 0, 0);')
            self.comboBox_3.addItem('获取失败')
            self.label_3.setText(data.get('msg'))
            self.pushButton_5.setEnabled(False)
        self.pushButton_6.setEnabled(True)

    def main(self, data):
        if data.get('code'):
            pic_bytes = data.get('data')
            self.img = QImage.fromData(pic_bytes)
            if self.stackedWidget.currentIndex():
                self.label_3.setPixmap(QPixmap.fromImage(self.img))
                self.label_3.setScaledContents(True)
            else:
                self.label.setPixmap(QPixmap.fromImage(self.img))
                self.label.setScaledContents(True)
                self.pushButton_3.setEnabled(True)
            self.pushButton_4.setEnabled(True)
            self.pushButton_2.setEnabled(True)
        else:
            if self.stackedWidget.currentIndex():
                self.label_3.setText(data.get('msg'))
            else:
                self.label.setText(data.get('msg'))
        if self.stackedWidget.currentIndex():
            self.pushButton_5.setEnabled(True)
        else:
            self.pushButton.setEnabled(True)

    def pic(self):
        if self.img:
            clipboard = QApplication.clipboard()
            clipboard.setPixmap(QPixmap.fromImage(self.img))
            QMessageBox.about(self, '成功', '复制成功')
        else:
            QMessageBox.warning(self, '错误', '未生成图片')

    def return_func(self):
        self.stackedWidget.setCurrentIndex(1)

    def LabelSetMenu(self):
        self.label_3.setContextMenuPolicy(Qt.CustomContextMenu)
        self.label.setContextMenuPolicy(Qt.CustomContextMenu)
        self.label_3.customContextMenuRequested.connect(self.RightMenuShow)
        self.label.customContextMenuRequested.connect(self.RightMenuShow)

    def RightMenuShow(self):
        menu = QMenu(self)
        menu.addAction(QAction('复制图片', self, triggered=self.pic))
        menu.exec_(QCursor.pos())


def init_setup():
    basedir = os.path.dirname(__file__)

    try:
        from ctypes import windll  # Only exists on Windows.
        myappid = 'mycompany.myproduct.subproduct.version'
        windll.shell32.SetCurrentProcessExplicitAppUserModelID(myappid)
    except ImportError:
        pass
    return basedir

if __name__ == "__main__":
    import sys

    basedir = init_setup()

    app = QApplication(sys.argv)
    app.setStyleSheet(StyleSheet)
    # window = FramelessWindow()
    # window.setWindowTitle('条形码生成')
    # window.setWindowIcon(QIcon(':/image/ico.ico'))
    # # window.resize(QSize(400, 350))
    # window.setWidget(main(window))
    window = main()
    window.setWindowIcon(QIcon(os.path.join(basedir,'image/ico.ico')))
    window.show()
    sys.exit(app.exec())
