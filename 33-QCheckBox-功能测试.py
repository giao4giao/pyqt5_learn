#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 33-QCheckBox-功能测试.py
    time: 2022/6/16 21:10
    software: PyCharm
..................................
"""

from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


window = QWidget()
window.setWindowTitle("QCheckBox 功能测试")
window.resize(500,500)

# print(QCheckBox.__bases__)

cb = QCheckBox("&python",window)
cb.setIcon(QIcon("xxx.png"))
cb.setIconSize(QSize(60,60))
cb.setTristate(True)

# cb.setChecked(True)
cb.setChecked(Qt.PartiallyChecked)
cb.stateChanged.connect(lambda state:print(state))


window.show()
sys.exit(app.exec_())




