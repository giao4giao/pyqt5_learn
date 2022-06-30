#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 59-QRubberBand-功能作用.py
    time: 2022/6/30 12:56
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QRubberBand-功能作用')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        rb = QRubberBand(QRubberBand.Rectangle,self)
        rb.setGeometry(10,10,60,60)
        print(rb.isVisible())
        rb.show()


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())



