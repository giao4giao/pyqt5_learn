#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 29-QCommandLinkButton-使用.py
    time: 2022/6/16 20:01
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
        btn = QCommandLinkButton("标题",'描述',self)
        btn.setText("标题2")
        btn.setDescription("aaaaa")
        btn.setIcon(QIcon("xxx.png"))
        print(btn.description())

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())
