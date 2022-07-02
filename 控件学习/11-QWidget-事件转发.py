#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 11-QWidget-事件转发.py
    time: 2022/5/29 16:53
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Label(QLabel):
    def mousePressEvent(self,event):
        print('label')
        # event.accept()
        # print(event.isAccepted())
        event.ignore()

class PushButton(QPushButton):
    def mousePressEvent(self,event):
        print('button')
        # event.accept()
        # print(event.isAccepted())
        event.ignore()

class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('事件转发')
        self.resize(500,500)
        self.setup_ui()

    def setup_ui(self):
        mid_window = MinWindow(self)
        mid_window.resize(300,300)
        mid_window.setAttribute(Qt.WA_StyledBackground,True)
        mid_window.setStyleSheet('background-color:yellow;')

    def mousePressEvent(self,event):
        print('top_window')

class MinWindow(Window):
    def mousePressEvent(self,event):
        print('mid_window')
        event.ignore()


    def setup_ui(self):
        label = Label(self)
        # label = QLabel(self)
        label.setText('label')
        label.setStyleSheet('background-color:red;')
        label.move(100,100)

        btn = PushButton(self)
        btn.setText('btn')
        btn.move(50,50)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())