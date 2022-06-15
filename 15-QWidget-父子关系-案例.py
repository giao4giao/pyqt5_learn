#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 15-QWidget-父子关系-案例.py
    time: 2022/6/14 16:08
    software: PyCharm
..................................
"""
from PyQt5.Qt import *


# class Label(QLabel):
#     def mousePressEvent(self, event):
#         self.setStyleSheet("background-color:red;")


class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('父子关系')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        for i in range(1,11):
            label = QLabel(self)
            label.setText("标签"+str(i))
            label.move(40*i,40*i)

    def mousePressEvent(self, event):
        print('click')
        local_x = event.x()
        local_y = event.y()
        # print(local_x,local_y)
        sub_widget = self.childAt(local_x,local_y)
        if sub_widget:
            sub_widget.setStyleSheet("background-color:red;")





if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())