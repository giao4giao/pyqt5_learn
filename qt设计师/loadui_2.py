#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: loadui_2.py
    time: 2022/7/3 21:58
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
from login_two import Ui_Form


class Window(QWidget,Ui_Form):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setupUi(self)
        # self.setup_ui()


    def setup_ui(self):
        pass




if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()

    sys.exit(app.exec_())