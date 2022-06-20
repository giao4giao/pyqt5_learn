#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 39-QFrame-功能测试.py
    time: 2022/6/17 21:21
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


window = QWidget()
window.setWindowTitle("QFrame功能测试")
window.resize(500,500)

frame = QFrame(window)
frame.resize(100,100)
frame.move(100,100)
frame.setStyleSheet("background-color:red;")

# frame.setFrameShape(QFrame.Box)
# # frame.setFrameShape(QFrame.Panel)
# frame.setFrameShadow(QFrame.Raised)

frame.setFrameStyle(QFrame.Box|QFrame.Raised)

frame.setLineWidth(6)
frame.setMidLineWidth(12)
print(frame.frameWidth())

# frame.setFrameRect(QRect(QRect(20,20,20,20)))

window.show()
sys.exit(app.exec_())