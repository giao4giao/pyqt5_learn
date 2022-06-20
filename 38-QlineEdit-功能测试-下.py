#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 38-QlineEdit-功能测试-下.py
    time: 2022/6/17 20:31
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


window = QWidget()
window.setWindowTitle("功能测试")
window.resize(500,500)

le = QLineEdit(window)
le.move(100,100)
le.resize(300,300)
# le.setContentsMargins(100,0,0,0)
le.setStyleSheet("background-color:cyan;")
# le.setTextMargins(100,200,0,0)
le.setTextMargins(0,0,50,50)
le.setAlignment(Qt.AlignRight | Qt.AlignBottom)
le.setDragEnabled(True)

le2 = QLineEdit(window)
le2.resize(50,50)
le2.move(200,0)

btn = QPushButton(window)
btn.setText("btn")
btn.move(50,50)
def cursor():
    # le.cursorBackward(False,2)
    # le.cursorBackward(True,2)

    # le.cursorForward(False,2)
    # le.cursorWordBackward(True)
    # le.cursorWordForward(True)

    # le.home(True)
    # le.end(False)

    # le.setCursorPosition(int(len(le.text())/2))
    # print(le.cursorPosition())
    # print(le.cursorPositionAt(QPoint(15, 5)))

    # le.backspace()
    # le.del_()

    # le.cut()
    # le.paste()

    le.setFocus()


btn.clicked.connect(cursor)


window.show()
sys.exit(app.exec_())