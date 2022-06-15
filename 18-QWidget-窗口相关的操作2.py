#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 18-QWidget-窗口相关的操作2.py
    time: 2022/6/15 16:28
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys

class Window(QWidget):
    def mousePressEvent(self, event):
        if self.isMaximized():
            self.showNormal()
        else:
            self.showMaximized()

app = QApplication(sys.argv)


window = Window()
window.setWindowTitle("窗口相关的操作2")
window.resize(500,500)



window.show()
# window.showMaximized()
# window.showFullScreen()
# window.showMinimized()




sys.exit(app.exec_())