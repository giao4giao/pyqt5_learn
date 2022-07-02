#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 21-QWidget-交互状态2.py
    time: 2022/6/15 17:56
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class Btn(QPushButton):
    def paintEvent(self, evt):
        print('print btn')
        return super().paintEvent(evt)


class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        # self.setWindowTitle('交互状态[*]')
        self.setWindowTitle('[*]交互状态')
        self.setWindowTitle('[*]交互状态')
        self.resize(500,500)
        self.setup_ui()



    def paintEvent(self, evt):
        print('print window')
        return super().paintEvent(evt)


    def setup_ui(self):
        self.btn = Btn(self)
        self.btn.setText("btn")
        self.btn.pressed.connect(lambda :self.btn.setVisible(False))
        self.btn.destroyed.connect(lambda:print("释放了"))

        # self.btn.setVisible(False)
        # self.btn.setHidden(True)
        # self.btn.hide()

        # self.btn.deleteLater()
        self.btn.setAttribute(Qt.WA_DeleteOnClose,True)
        self.btn.close()


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()


    sys.exit(app.exec_())

