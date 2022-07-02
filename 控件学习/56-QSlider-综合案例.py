#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 56-QSlider-综合案例.py
    time: 2022/6/29 18:00
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class Slider(QSlider):
    def __init__(self,parent=None,*args,**kwargs):
        super().__init__(parent,*args,**kwargs)
        self.setTickPosition(QSlider.TicksBothSides)

        self.setup_ui()

    def setup_ui(self):
        self.label = QLabel(self)
        self.label.setText('0')
        self.label.setStyleSheet('color:red;')
        self.label.hide()

    def mousePressEvent(self, evt):
        super().mousePressEvent(evt)
        x = int((self.width()-self.label.width())/2)
        y = (1-self.value()/(self.maximum()-self.minimum()))*self.height()-self.label.height()
        # print(x,y)
        self.label.show()
        self.label.move(x,int(y))

    def mouseMoveEvent(self,evt):
        super().mouseMoveEvent(evt)
        x = int((self.width()-self.label.width())/2)
        y = (1-self.value()/(self.maximum()-self.minimum()))*(self.height()-self.label.height())
        self.label.move(x,int(y))
        self.label.setText(str(self.value()))
        self.label.adjustSize()

    def mouseReleaseEvent(self, evt):
        self.label.hide()

class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('综合案例')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        slider = Slider(self)
        slider.move(200,200)
        slider.resize(30,200)






if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())

