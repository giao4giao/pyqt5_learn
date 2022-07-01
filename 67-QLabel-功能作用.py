#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 67-QLabel-功能作用.py
    time: 2022/6/30 18:29
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QLabel')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        # label = QLabel('我我我浪费时间肯定是会计佛i大师傅joie杰佛i',self)
        # label = QLabel('<h1>aaa</h1>',self)
        # label = QLabel('账号(&s)：',self)
        # label = QLabel('<a href=''http://www.baidu.com>baidu</a>',self)
        # label = QLabel('12 3'*10,self)
        label = QLabel('\n'.join('1234567890'),self)
        label.move(100,50)
        label.resize(300,200)
        label.setStyleSheet('background-color:cyan;')
        # label.adjustSize()

        # label.setAlignment(Qt.AlignRight|Qt.AlignCenter)
        # label.setIndent(20)   # 缩进

        label.setMargin(20)

        # label.setTextFormat(Qt.PlainText)

        le1 = QLineEdit(self)
        le1.move(100,400)

        le2 = QLineEdit(self)
        le2.move(100,300)

        label.setBuddy(le1)

        # label.setPixmap(QPixmap('rose.png'))
        # label.setScaledContents(True) # 缩放内容

        # label.adjustSize()

        # Qt.NoTextInteraction
        # 不可能与文本进行交互。
        # Qt.TextSelectableByMouse
        # 可以使用鼠标选择文本并使用上下文菜单或标准键盘快捷键将其复制到剪贴板。
        # Qt.TextSelectableByKeyboard
        # 可以使用键盘上的光标键选择文本。显示文本光标。
        # Qt.LinksAccessibleByMouse
        # 可以使用鼠标突出显示和激活链接。
        # Qt.LinksAccessibleByKeyboard
        # 可以使用选项卡聚焦链接并使用enter激活。
        # Qt.TextEditable
        # 该文字完全可编辑。
        # Qt.TextEditorInteraction
        # 文本编辑器的默认值。
        # TextSelectableByMouse | TextSelectableByKeyboard | TextEditable
        #
        # Qt.TextBrowserInteraction
        # QTextBrowser的默认值。
        # TextSelectableByMouse | LinksAccessibleByMouse | LinksAccessibleByKeyboard


        # label.setTextInteractionFlags(
        #     Qt.TextSelectableByMouse| Qt.TextSelectableByKeyboard
        # )

        # label.setOpenExternalLinks(True)

        label.setWordWrap(True)

        # label.setText("<img src='rose.png' width=60 height=60>")
        # label.setNum(88.33)


        # TODO 出现好多次这个对象了
        # pic = QPicture()
        # painter = QPainter(pic)
        # painter.setBrush(QBrush(QColor(100,200,100)))
        # painter.drawEllipse(0,0,200,200)
        # label.setPicture(pic)

        # movie = QMovie('1.gif')
        # label.setMovie(movie)
        #
        # # TODO 用来做动态背景不错。。。。。
        #
        # movie.start()
        # movie.setSpeed(100) #默认100
        #
        # movie.clear()


        label.setText("abcd<a href='http://www.baidu.com'>baidu</a> en")

        # label.linkHovered.connect(lambda val :print(val))
        label.linkActivated.connect(lambda val :print(val))

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())