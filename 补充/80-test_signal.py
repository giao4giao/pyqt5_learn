#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: test_signal.py
    time: 2022/7/3 22:04
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class Btn(QPushButton):
    # TODO 这里重载
    RightClicked = pyqtSignal([str],[int,str])

    def mousePressEvent(self,evt):
        super().mousePressEvent(evt)
        print(evt.button())
        if evt.button() == Qt.RightButton:
            self.RightClicked[str].emit(self.text())
            self.RightClicked[int,str].emit(len(self.text()),self.text())
        # QMouseEvent

class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        btn = Btn('btn',self)
        # btn.clicked.connect(lambda :print('clicked'))
        btn.RightClicked.connect(lambda x:print('RightClicked',x))




if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())