#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 02-事件机制.py
    time: 2022/5/24 1:06
    software: PyCharm
..................................
"""
import sys
from PyQt5.Qt import *

class App(QApplication):
    def notify(self, recevier, evt):
        if recevier.inherits('QPushButton') and evt.type()==QEvent.MouseButtonPress:
            print(recevier,evt)
        return super().notify(recevier,evt)

class Btn(QPushButton):
    def event(self,evt):
        if evt.type()==QEvent.MouseButtonPress:
            print(evt)
        return super().event(evt)

    def mousePressEvent(self, qmouseevent):
        print('按下')
        return super().mousePressEvent(qmouseevent)


app = App(sys.argv)

window = QWidget()

btn = Btn(window)
btn.setText('btn')
btn.move(100,100)
btn.pressed.connect(lambda :print('click'))


window.show()

sys.exit(app.exec_())












