#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 07-QWidget-内容编辑.py
    time: 2022/5/29 15:28
    software: PyCharm
..................................
"""
import sys
from PyQt5.Qt import *

app = QApplication(sys.argv)

window = QWidget()

window.setWindowTitle('内容编辑')
window.resize(500,500)

label = QLabel(window)
label.setText('aaa')
label.resize(300,300)
label.setStyleSheet('background-color:cyan;')
label.setContentsMargins(150,200,0,0)
print(label.getContentsMargins())
print(label.contentsRect())


window.show()


sys.exit(app.exec_())