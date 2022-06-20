#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 34-QLineEdit-功能测试.py
    time: 2022/6/16 21:36
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


window = QWidget()
window.setWindowTitle("QLineEdit功能测试")
window.resize(500,500)

# le = QLineEdit('aaaaa',window)
# le.setText("zz")
# le.insert("22")
#
# btn = QPushButton(window)
# btn.setText('btn')
# btn.move(100,100)
# btn.pressed.connect(lambda:le.insert("18"))
# btn.pressed.connect(lambda:print(le.text()))

le_a = QLineEdit(window)
le_a.move(100,100)
le_b = QLineEdit(window)
le_b.move(100,200)

# le_b.setEchoMode(QLineEdit.Password)
le_b.setEchoMode(QLineEdit.PasswordEchoOnEdit)

btn = QPushButton(window)
btn.setText("copy")
btn.move(100,300)
btn.clicked.connect(lambda:le_b.insert(le_a.text()))
btn.clicked.connect(lambda:print(le_b.text()))
btn.clicked.connect(lambda:print(le_b.displayText()))


window.show()
sys.exit(app.exec_())