#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 16-QWidget-层级关系调整.py
    time: 2022/6/14 16:18
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('层级关系调整')
        self.resize(500,500)
        self.setup_ui()

    def mousePressEvent(self,evt):
        print('click')
        obj = self.childAt(evt.x(),evt.y())
        # print(obj)
        if obj:
            obj.raise_()


    def setup_ui(self):
        label1 = QLabel(self)
        label1.setText('1')
        label1.resize(200,200)
        label1.setStyleSheet("background-color:red;")

        label2 = QLabel(self)
        label2.setText('2')
        label2.resize(200, 200)
        label2.setStyleSheet("background-color:green;")
        label2.move(100,100)

        # label2.lower()
        # label1.raise_()
        # label2.stackUnder(label1)





if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())