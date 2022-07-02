#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 40-QTextEdit-父类功能测试.py
    time: 2022/6/17 21:36
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


window = QWidget()
window.setWindowTitle("父类功能测试")
window.resize(500,500)

te = QTextEdit("1111111111",window)
te.resize(200,200)

te.setVerticalScrollBarPolicy(Qt.ScrollBarAlwaysOn)
# te.setVerticalScrollBarPolicy(Qt.ScrollBarAlwaysOff)
te.setHorizontalScrollBarPolicy(Qt.ScrollBarAlwaysOn)

btn = QPushButton(window)
btn.setIcon(QIcon("xxx.png"))
te.setCornerWidget(btn)
btn.pressed.connect(lambda :print('aaa'))

window.show()
sys.exit(app.exec_())