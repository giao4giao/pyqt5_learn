#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 28-QPushButton-功能api.py
    time: 2022/6/16 18:21
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.btn = QPushButton()
        self.setup_ui()

    def contextMenuEvent(self, event):
        print('default')
        self.menu = QMenu()

        self.open_recent_menu = QMenu(self.menu)
        self.open_recent_menu.setTitle("最近打开")

        self.new_action = QAction(QIcon("xxx.png"), "新建", self.menu)
        self.new_action.triggered.connect(lambda: print("新建文件"))

        self.open_action = QAction(QIcon("xxx.png"), "打开", self.menu)
        self.open_action.triggered.connect(lambda: print("打开文件"))

        self.exit_action = QAction("退出", self.menu)
        self.exit_action.triggered.connect(lambda: print("退出文件"))

        self.file_action = QAction("Python")

        self.menu.addAction(self.new_action)
        self.menu.addAction(self.open_action)
        self.open_recent_menu.addAction(self.file_action)
        self.menu.addMenu(self.open_recent_menu)
        self.menu.addSeparator()
        self.menu.addAction(self.exit_action)

        self.menu.exec_(event.globalPos())

    def setup_ui(self):
        # btn = QPushButton(self)
        # btn.setText("xxx")
        # btn.setIcon(QIcon("xxx.png"))
        # btn.show()
        self.btn = QPushButton(QIcon("xxx.png"),"xxx",self)
        # 菜单添加
        # self.set_menu()

        # 扁平化
        # self.to_flat()

        # 设置默认
        self.dafault_btn()



    def set_menu(self):
        self.menu = QMenu()

        self.open_recent_menu = QMenu(self.menu)
        self.open_recent_menu.setTitle("最近打开")


        # self.new_action = QAction()
        # self.new_action.setText("新建")
        # self.new_action.setIcon(QIcon("xxx.png"))

        self.new_action = QAction(QIcon("xxx.png"),"新建",self.menu)
        self.new_action.triggered.connect(lambda:print("新建文件"))

        self.open_action = QAction(QIcon("xxx.png"),"打开",self.menu)
        self.open_action.triggered.connect(lambda:print("打开文件"))

        self.exit_action = QAction("退出",self.menu)
        self.exit_action.triggered.connect(lambda:print("退出文件"))

        self.file_action = QAction("Python")

        self.menu.addAction(self.new_action)
        self.menu.addAction(self.open_action)
        self.open_recent_menu.addAction(self.file_action)
        self.menu.addMenu(self.open_recent_menu)
        self.menu.addSeparator()
        self.menu.addAction(self.exit_action)

        self.btn.setMenu(self.menu)

        # self.btn.showMenu()

    def to_flat(self):
        self.btn.setStyleSheet("background:red;")
        self.btn.setFlat(True)
        print(self.btn.isFlat())

    def dafault_btn(self):
        self.btn2 = QPushButton(self)
        self.btn2.setText("btn2")
        self.btn2.move(200, 200)

        self.btn2.setAutoDefault(True)
        print(self.btn.autoDefault())
        print(self.btn2.autoDefault())

        self.btn2.setDefault(True)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.setContextMenuPolicy(Qt.CustomContextMenu)
    window.customContextMenuRequested.connect(lambda a:print(window.mapToGlobal(a)))
    window.show()
    window.btn.showMenu()
    sys.exit(app.exec_())
