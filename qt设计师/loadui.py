#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: loadui.py
    time: 2022/7/3 19:06
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
        from PyQt5.uic import loadUi
        loadUi('login_two.ui',self)



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())