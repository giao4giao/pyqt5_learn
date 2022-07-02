#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 79-布局管理器-补充.py
    time: 2022/7/2 11:54
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class Label(QLabel):
    # def minimumSizeHint(self):
    #     return QSize(200,200)

    def sizeHint(self):
        return QSize(150,60)

class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        label1= Label('标签1')
        label1.setStyleSheet('background-color:cyan;')
        label2= QLabel('标签2')
        label2.setStyleSheet('background-color:yellow;')
        label3= QLabel('标签3')
        label3.setStyleSheet('background-color:red;')


        layout = QVBoxLayout()
        self.setLayout(layout)


        layout.addWidget(label1)
        layout.addWidget(label2)
        layout.addWidget(label3)

        # # # label1.setSizePolicy(QSizePolicy.Fixed,QSizePolicy.Fixed)
        # # # label1.setSizePolicy(QSizePolicy.Fixed,QSizePolicy.Maximum)
        # # label1.setSizePolicy(QSizePolicy.Fixed,QSizePolicy.Preferred)
        # # label2.setSizePolicy(QSizePolicy.Fixed,QSizePolicy.Expanding) # expanding比Preferred更加强势
        # label1.setSizePolicy(QSizePolicy.Fixed,QSizePolicy.Ignored)     # Ignored 可以挤没 忽略 sizeHint()

        sp = QSizePolicy(QSizePolicy.Ignored,QSizePolicy.Ignored)
        sp.setRetainSizeWhenHidden(True) # 隐藏存在留位置
        label1.setSizePolicy(sp)
        label1.hide()

        label2.setFixedSize(400,100)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())