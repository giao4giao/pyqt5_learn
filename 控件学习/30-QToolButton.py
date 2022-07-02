#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 30-QToolButton.py
    time: 2022/6/16 20:07
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        self.tb = QToolButton(self)

        # 按钮样式风格
        self.button_style()

        # 设置箭头
        self.set_arrow()

        # 自动提升
        # self.auto_raise()

        # 菜单操作
        self.menu_about()

        # 信号相关
        self.connect_about()



    #设置箭头
    def set_arrow(self):
        # Qt.NoArrow
        # 无箭头
        # Qt.UpArrow
        # 向上箭头
        # Qt.DownArrow
        # 向下箭头
        # Qt.LeftArrow
        # 向左箭头
        # Qt.RightArrow
        # 向右箭头
        self.tb.setArrowType(Qt.DownArrow)


    # 按钮样式风格
    def button_style(self):
        self.tb.setText("工具")
        self.tb.setIcon(QIcon("xxx.png"))
        self.tb.setIconSize(QSize(60,60))
        self.tb.setToolTip("在这种")

        # Qt.ToolButtonIconOnly
        # 仅显示图标
        # Qt.ToolButtonTextOnly
        # 仅显示文字
        # Qt.ToolButtonTextBesideIcon
        # 文本显示在图标旁边
        # Qt.ToolButtonTextUnderIcon
        # 文本显示在图标下方
        # Qt.ToolButtonFollowStyle
        # 遵循风格

        self.tb.setToolButtonStyle(Qt.ToolButtonTextBesideIcon)
        print(self.tb.toolButtonStyle())

    # 自动提升
    def auto_raise(self):
        self.btn = QPushButton(self)
        self.btn.setText("一般按钮")
        self.btn.move(100,100)
        self.btn.setFlat(True)
        self.tb.setAutoRaise(True)

    # 菜单操作
    def menu_about(self):
        self.btn = QPushButton(self)
        self.btn.setText("一般按钮")
        self.btn.move(100,100)
        self.btn.setFlat(True)
        # self.menu = QMenu(self.btn)
        self.menu = QMenu(self.tb)

        self.sub_menu = QMenu(self.menu)
        self.sub_menu.setTitle("子菜单")
        self.sub_menu.setIcon(QIcon("xxx.png"))
        self.action1 = QAction(QIcon("xxx.png"),"行为",self.menu)
        self.action1.setData([1,2,3,4])
        self.action2 = QAction("行为",self.menu)
        self.action2.setData("333")
        self.action1.triggered.connect(lambda:print("xxx"))

        self.menu.addMenu(self.sub_menu)
        self.menu.addSeparator()
        self.menu.addAction(self.action1)
        self.menu.addAction(self.action2)

        # self.btn.setMenu(self.menu)
        self.tb.setMenu(self.menu)

        self.tb.ToolButtonPopupMode(QToolButton.MenuButtonPopup)

    def connect_about(self):
        self.tb.triggered.connect(lambda a:print(a,a.data()))


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())