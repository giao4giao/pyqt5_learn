#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 58-QDial-功能测试.py
    time: 2022/6/30 12:34
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
        label = QLabel(self)
        label.move(200,100)
        label.setText('aaaaaaa\naaaabbbb\nbbbb')
        # label.setStyleSheet('font-size:30px;')



        dia = QDial(self)

        dia.setRange(0,200)
        # dia.valueChanged.connect(lambda val:print(val))
        dia.valueChanged.connect(lambda val:label.setStyleSheet(f'font-size:{val}px;'))
        dia.valueChanged.connect(label.adjustSize)

        dia.setNotchesVisible(True)
        dia.setPageStep(5)

        dia.setWrapping(True)
        dia.setNotchTarget(30)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())




