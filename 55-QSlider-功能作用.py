#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 55-QSlider-功能作用.py
    time: 2022/6/29 17:55
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        sd = QSlider(self)
        sd.move(200,100)
        sd.resize(50,200)

        sd.setTickPosition(QSlider.TicksBothSides)

        # sd.setTickInterval(5) # 刻度

        sd.valueChanged.connect(lambda val:print(val))



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())