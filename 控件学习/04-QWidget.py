#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 04-QWidget.py
    time: 2022/5/25 21:01
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys

def test_old():
    app = QApplication(sys.argv)

    window = QWidget()
    window.resize(500,500)

    # print(QWidget.__bases__)
    # print(QWidget.mro())



    # red = QWidget(window)
    # red.resize(100,100)
    # red.setStyleSheet('background-color:red;')
    # red.move(300,100)
    #
    # green = QWidget(window)
    # green.resize(100,100)
    # green.setStyleSheet('background-color:green;')
    # green.move(300,50)


    window.show()

    sys.exit(app.exec_())




app = QApplication(sys.argv)

# window = QWidget()
#
# # red = QWidget(window)
# # red.resize(100,100)
# # red.setStyleSheet('background-color:red;')
#
# # window.move(100,100)
# # window.resize(200,200)
#
# window.move(150,150)
# window.resize(200,200)
# # window.setGeometry(0,0,150,150)
#
# print(window.x())
# print(window.width())
# print(window.geometry())
#
# window.show()
# window.setGeometry(0,0,150,150)
#
# print('-'*100)
# print(window.x())
# print(window.width())
# print(window.geometry())


window = QWidget()


window.move(150,150)
window.resize(500,500)
# window.setFixedSize(500,500)

label = QLabel(window)
label.setText('aaa')
label.move(100,100)
label.setStyleSheet('background-color:red;')

label.setText('zzz')

btn = QPushButton(window)
btn.setText('add')
btn.move(100,300)
btn.clicked.connect(lambda:label.setText(label.text()+'aaa'))
btn.clicked.connect(lambda:label.adjustSize())
window.show()

sys.exit(app.exec_())












