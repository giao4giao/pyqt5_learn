#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 21-QWidget-交互状态.py
    time: 2022/6/15 17:29
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

        self.setWindowModified(True)
        print(self.isWindowModified(),'WindowModified')

    def paintEvent(self, evt):
        print('print window')
        return super().paintEvent(evt)


    def setup_ui(self):
        self.btn = Btn(self)
        self.btn.setText("btn")
        self.btn.pressed.connect(lambda :self.btn.setVisible(False))
        # self.btn.setEnabled(False)
        # print(btn.isEnabled())
        # self.btn.setVisible(False)
        self.btn.setVisible(True)



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    # window.setVisible(True)
    # window.setHidden(False)

    print(window.btn.isHidden(),'isHidden')
    print(window.btn.isVisible(),'isVisible')
    # window.setVisible(False)
    print(window.btn.isVisibleTo(window))

    w2 = QWidget()
    w2.show()

    window.raise_()
    print(window.isActiveWindow(),'isActiveWindow')



    sys.exit(app.exec_())

