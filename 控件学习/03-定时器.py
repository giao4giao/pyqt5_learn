#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 03-定时器.py
    time: 2022/5/25 0:19
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys

class MyObject(QObject):
    def timerEvent(self, evt):
        print(evt,'1')

def api_test():
    global obj
    obj = MyObject()
    timer_id = obj.startTimer(1000)
    print(timer_id)
    obj.killTimer(timer_id)


class MyLabel(QLabel):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setText('10')
        self.move(100, 100)
        self.setStyleSheet('font-size:300px;')


    def setSec(self,sec=10):
        self.setText(str(sec))


    def startMyTimer(self,sec=1000):
        self.time_id = self.startTimer(int(sec))



    def timerEvent(self, evt):
        current_sec = int(self.text())
        current_sec -=1
        self.setText(str(current_sec))
        if current_sec ==0:
            self.killTimer(self.time_id)


class MyWidget(QWidget):
    def timerEvent(self, evt):
        current_w = self.width()
        current_h = self.height()
        self.resize(current_w+5,current_h+5)



app = QApplication(sys.argv)


window = MyWidget()
window.setWindowTitle('定时器')
window.resize(500,500)

# api_test()
label = MyLabel(window)
label.startMyTimer(500)

window.startTimer(1000)
window.show()


sys.exit(app.exec_())