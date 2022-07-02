#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 05-QWidget案例.py
    time: 2022/5/29 14:52
    software: PyCharm
..................................
"""
import sys
from PyQt5.Qt import *

app = QApplication(sys.argv)

window = QWidget()
window.resize(500,500)
window.move(300,300)

window.show()

widget_count = 100
column_count = 17
row_count = (widget_count-1) // column_count + 1

widget_width = window.width() / column_count
widget_height = window.height() / row_count


for i in range(widget_count):
    w = QWidget(window)
    w.resize(int(widget_width),int(widget_height))
    widget_x = (i % column_count) * widget_width
    widget_h = (i // column_count) * widget_height
    w.move(int(widget_x),int(widget_h))
    w.setStyleSheet('background-color:red;border:1px solid yellow;')
    w.show()


sys.exit(app.exec_())











