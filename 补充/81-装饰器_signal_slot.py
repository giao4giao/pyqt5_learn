#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: zhuangqshi_signal-slot.py
    time: 2022/7/3 22:19
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

        QMetaObject.connectSlotsByName(self)

    def setup_ui(self):
        btn = QPushButton('test',self)
        btn.setObjectName('btn')
        btn.resize(200,200)
        btn.move(100,100)

        btn2 = QPushButton('test',self)
        btn2.setObjectName('btn2')
        btn2.resize(200,200)
        btn2.move(100,300)

    # on_ + objectName +
    @pyqtSlot(bool)
    def on_btn_clicked(self,val):
        print('click',val)






if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())