#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 12-QWidget-案例1.py
    time: 2022/5/29 17:57
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class MyLabel(QLabel):
    def enterEvent(self, *args,**kwargs):
        print('enter')
        self.setText('欢迎光临')


    def leaveEvent(self, *args,**kwargs):
        print('leave')
        self.setText('谢谢惠顾')

    def keyPressEvent(self,event) -> None:
        # print(event.key())
        if event.key()==Qt.Key_Tab:
            print('tab')
        if event.modifiers()==Qt.ControlModifier and event.key()==Qt.Key_S:
            print("ctrl+s")
        if event.modifiers() == Qt.ControlModifier | Qt.ShiftModifier and event.key() == Qt.Key_A:
            print("ctrl+shift+A")

class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('鼠标操作案例1')
        self.resize(500,500)
        self.setup_ui()

    def setup_ui(self):
        label = MyLabel(self)
        label.resize(200,200)
        label.move(100,100)
        label.setStyleSheet('background-color:cyan;')
        label.grabKeyboard()





if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())