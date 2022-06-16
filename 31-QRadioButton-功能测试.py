#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 31-QRadioButton-功能测试.py
    time: 2022/6/16 20:40
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
        rb_nan = QRadioButton("男-Male",self)
        rb_nan.setShortcut("Alt+M")
        rb_nan.move(100,100)
        rb_nan.setChecked(True)
        rb_nv = QRadioButton("女-&Female",self)
        rb_nv.move(100,200)
        rb_nv.setIcon(QIcon("xxx.png"))
        rb_nv.setIconSize(QSize(60,60))

        # rb_nv.setAutoExclusive(False)
        rb_nv.toggled.connect(lambda a :print(a))



        rb_yes = QRadioButton("yes",self)
        rb_yes.move(400,100)
        rb_no = QRadioButton("no",self)
        rb_no.move(400,200)



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())