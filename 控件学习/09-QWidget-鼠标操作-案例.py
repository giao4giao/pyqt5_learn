#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 09-QWidget-鼠标操作-案例.py
    time: 2022/5/29 16:12
    software: PyCharm
..................................
"""
import sys
from PyQt5.Qt import *

# class Window(QWidget):
#     # QPointF
#     def mouseMoveEvent(self, event):
#         print('move',event.localPos())
#         self.findChild(QLabel).move(event.localPos().x(),event.localPos().y())
#
#
#
# app = QApplication(sys.argv)
#
# window = Window()
# window.setWindowTitle('鼠标操作-案例')
# window.resize(500,500)
# window.move(200,200)
#
# label = QLabel(window)
# label.setText('ffffffff')
# label.move(100,100)
# label.setStyleSheet('background-color:cyan;')
#
# window.setMouseTracking(True)
#
# pixmap = QPixmap('xxx.png').scaled(50,50)
# cursor = QCursor(pixmap)
# window.setCursor(cursor)
#
# window.show()
# sys.exit(app.exec_())



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('鼠标操作-案例')
        self.resize(500, 500)
        self.move(200, 200)

        self.Setup()
        self.Cursor()

    def Cursor(self):
        self.setMouseTracking(True)
        pixmap = QPixmap('xxx.png').scaled(50, 50)
        cursor = QCursor(pixmap)
        self.setCursor(cursor)


    def Setup(self):
        self.label = QLabel(self)
        self.label.setText('ffffffff')
        self.label.move(100, 100)
        self.label.setStyleSheet('background-color:cyan;')

    def mouseMoveEvent(self, event):
        print('move',event.localPos())

        # self.findChild(QLabel).move(int(event.localPos().x()),int(event.localPos().y()))
        self.label.move(int(event.localPos().x()),int(event.localPos().y()))



app = QApplication(sys.argv)

window = Window()

window.show()
sys.exit(app.exec_())

