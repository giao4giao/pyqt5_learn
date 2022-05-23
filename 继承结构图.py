#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 继承结构图.py
    time: 2022/5/21 23:32
    software: PyCharm
..................................
"""
from PyQt5.Qt import *


class Window(QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("bt")
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        label = QLabel(self)
        label.setText("xxxx")

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())

