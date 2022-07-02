#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 26-QAbstractButton-简单介绍.py
    time: 2022/6/15 19:36
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


window = QWidget()
window.setWindowTitle("QAbstractButton")
window.resize(500,500)

class Btn(QAbstractButton):
    def paintEvent(self,evt):
        print('绘制按钮')
        painter = QPainter(self)

        pen = QPen(QColor(111,200,20),5)

        painter.setPen(pen)

        painter.drawText(25,40,self.text())
        painter.drawEllipse(0,0,100,100)




btn = Btn(window)
btn.setText('xxx')
btn.resize(100,100)
btn.pressed.connect(lambda:print('press'))

window.show()
sys.exit(app.exec_())