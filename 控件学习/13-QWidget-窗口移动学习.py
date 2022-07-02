#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 13-QWidget-案例2.py
    time: 2022/6/14 15:29
    software: PyCharm
..................................
"""

from PyQt5.Qt import *


class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('窗口移动')
        self.resize(500,500)
        self.setup_ui()

        self.mouse_x,self.mouse_y = 0,0
        self.origin_x, self.origin_y = 0, 0
        self.move_flag = False

    def setup_ui(self):
        pass

    def mousePressEvent(self, event):
        # QMouseEvent.globalX()
        # print('press')
        if event.button()==Qt.LeftButton:
            self.move_flag = True
            self.mouse_x = event.globalX()
            self.mouse_y = event.globalY()
            print(self.mouse_x,self.mouse_y)
            self.origin_x = self.x()
            self.origin_y = self.y()

    def mouseMoveEvent(self, event):
        # print('move')
        # print(event.globalPos())
        if self.move_flag:
            move_x = event.globalX()-self.mouse_x
            move_y = event.globalY()-self.mouse_y
            dest_x = self.origin_x + move_x
            dest_y = self.origin_y + move_y
            self.move(dest_x,dest_y)

    def mouseReleaseEvent(self, event):
        print('release')
        if event.button() == Qt.LeftButton:
            self.move_flag = False


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()

    window.setMouseTracking(True)

    window.show()
    sys.exit(app.exec_())











