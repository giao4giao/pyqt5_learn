#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 50-QTimeEdit-功能测试.py
    time: 2022/6/29 16:04
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QTimeEdit')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        te = QTimeEdit(QTime.currentTime(),self)
        te.setDisplayFormat("hh=m-ss:zzz a")
        print(te.time())




if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())