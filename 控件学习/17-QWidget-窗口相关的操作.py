#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 17-QWidget-窗口相关的操作.py
    time: 2022/6/15 13:47
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


window = QWidget()
window.resize(500,500)
window.setWindowTitle("w1")

# ico = QIcon("xxx.png")
# window.setWindowIcon(ico)
# print(window.windowIcon())
# window.setWindowTitle("8998")
# print(window.windowTitle())
# window.setWindowOpacity(0.5)
# print(window.windowOpacity())

# 状态的获取
print(window.windowState()==Qt.WindowNoState)
# window.setWindowState(Qt.WindowMinimized)
# window.setWindowState(Qt.WindowMaximized)
# window.setWindowState(Qt.WindowFullScreen)

window.show()

w2 = QWidget()
w2.setWindowTitle("w2")
w2.show()

window.setWindowState(Qt.WindowActive)


sys.exit(app.exec_())