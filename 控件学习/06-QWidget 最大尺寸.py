#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 06-QWidget 最大尺寸.py
    time: 2022/5/29 15:21
    software: PyCharm
..................................
"""
import sys
from PyQt5.Qt import *

app = QApplication(sys.argv)

window = QWidget()
window.setWindowTitle('最大尺寸')
# window.setFixedSize(400,200)
window.setMinimumSize(200,200)

window.setMaximumSize(500,500)


window.show()




sys.exit(app.exec_())