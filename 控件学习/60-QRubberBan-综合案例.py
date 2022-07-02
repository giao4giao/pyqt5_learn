#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 60-QRubberBan-综合案例.py
    time: 2022/6/30 12:59
    software: PyCharm
..................................
"""
from PyQt5.Qt import *


#TODO 能用在小说下载这里
class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('综合案例')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        for i in range(0,30):
            cb = QCheckBox(self)
            cb.setText(str(i))
            cb.move(i%4*80,i//4*60)

        self.rb = QRubberBand(QRubberBand.Rectangle,self)

    def mousePressEvent(self, evt):
        self.origin_pos = evt.pos()
        self.rb.setGeometry(QRect(self.origin_pos,QSize()))
        self.rb.show()

    def mouseMoveEvent(self, evt):
        self.rb.setGeometry(QRect(self.origin_pos, evt.pos()).normalized())

    def mouseReleaseEvent(self, evt):
        rect = self.rb.geometry()
        for child in self.children():
            if rect.contains(child.geometry()) and child.inherits('QCheckBox'):
                child.toggle()
        self.rb.hide()


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())