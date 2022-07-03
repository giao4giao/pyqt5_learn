#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: Custom_widget.py
    time: 2022/7/3 18:47
    software: PyCharm
..................................
"""
import math

from PyQt5.Qt import *

class Btn(QPushButton):
    def hitButton(self,point):
        # print(point)
        # return point.x()>self.width()/2
        distance = math.sqrt(math.pow(point.x()-self.width()/2,2)+math.pow(point.y()-self.height()/2,2))
        return distance<self.width()/2

    def paintEvent(self,evt):
        super().paintEvent(evt)
        painter = QPainter(self)
        painter.setPen(QPen(QColor(100,150,200),6))
        painter.drawEllipse(self.rect())