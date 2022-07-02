#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 10-QWidget-事件消息.py
    time: 2022/5/29 16:33
    software: PyCharm
..................................
"""
from PyQt5.Qt import *


class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('事件消息')
        self.resize(500,500)
        self.setup_ui()

    def setup_ui(self):
        pass

    def showEvent(self, event):
        print('show')


    def closeEvent(self, event):
        print('close')

    def moveEvent(self,event):
        print('move')

    def resizeEvent(self, event):
        print('resize')

    def enterEvent(self,event):
        print('enter')
        self.setStyleSheet('background-color:yellow;')

    def leaveEvent(self,event):
        print('leave')
        self.setStyleSheet('background-color:green;')

    def mousePressEvent(self,event):
        print('press')

    def mouseDoubleClickEvent(self, event):
        print('double')

    def mouseMoveEvent(self, event):
        print('pressmove')

    def keyPressEvent(self, event):
        print('keypress')

    def keyReleaseEvent(self, event):
        print('keyrelease')

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())




