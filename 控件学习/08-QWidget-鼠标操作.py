#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 08-QWidget-鼠标操作.py
    time: 2022/5/29 15:36
    software: PyCharm
..................................
"""
import sys
from PyQt5.Qt import *

# app = QApplication(sys.argv)
#
# window = QWidget()
#
# window.setWindowTitle('鼠标操作')
# window.resize(500,500)
#
# # window.setCursor(Qt.BusyCursor)
#
# label = QLabel(window)
# label.setText('。。。')
# label.resize(100,100)
# label.setStyleSheet('background-color:cyan;')
# label.setCursor(Qt.ForbiddenCursor)
#
#
# pixmap = QPixmap('xxx.png')
# pixmap = pixmap.scaled(50,50)
# cursor = QCursor(pixmap,0,0)
#
# window.setCursor(cursor)
# # window.unsetCursor()
#
# print(cursor.pos())
# cursor.setPos(12,12)
# window.show()
#
#
# sys.exit(app.exec_())

class MyWindow(QWidget):
    def mouseMoveEvent(self, me):
        # QMouseEvent
        print('move',me.globalPos())




app = QApplication(sys.argv)

window = MyWindow()

window.setWindowTitle('鼠标操作')
window.resize(500,500)
window.setMouseTracking(True)
print(window.hasMouseTracking())

window.show()


sys.exit(app.exec_())

