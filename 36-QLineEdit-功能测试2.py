#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 36-QLineEdit-功能测试2.py
    time: 2022/6/17 19:34
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


window = QWidget()
window.setWindowTitle("QLineEdit功能测试2")
window.resize(500,500)


le_a = QLineEdit(window)
le_a.move(100,100)
le_b = QLineEdit(window)
le_b.move(100,200)



btn = QPushButton(window)
btn.setText("copy")
btn.move(100,300)

btn.clicked.connect(lambda:print(le_b.isModified()))
btn.clicked.connect(lambda:le_b.setModified(False))

# 最大长度
le_a.setMaxLength(3)
print(le_a.maxLength)

le_a.setReadOnly(True)
le_a.setText("11111")

window.show()
sys.exit(app.exec_())