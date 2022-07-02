#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 14-QWidget-父子关系.py
    time: 2022/6/14 15:59
    software: PyCharm
..................................
"""

from PyQt5.Qt import *


class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('父子关系')
        self.resize(500,500)
        self.setup_ui()
        self.api()


    def setup_ui(self):
        self.label1 = QLabel(self)
        self.label1.setText("1")
        self.label2 = QLabel(self)
        self.label2.setText("2")
        self.label2.move(50,50)
        self.label3 = QLabel(self)
        self.label3.setText("3")
        self.label3.move(100,100)

    def api(self):
        # print(self.childAt(50,50))
        # print(self.label2.parentWidget())
        print(self.childrenRect())



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())