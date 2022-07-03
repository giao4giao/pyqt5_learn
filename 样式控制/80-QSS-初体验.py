#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 80-QSS-初体验.py
    time: 2022/7/2 15:49
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class Btn(QPushButton):
    pass

class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('qss的学习')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        box1 = QWidget()
        box2 = QWidget()
        box2.setObjectName('box2')

        box3 = QWidget(box2)
        box3.resize(150,150)
        box3.setStyleSheet('background-color:lightgray;s')

        # box1.setStyleSheet('QPushButton{background-color:orange;}')
        # box2.setStyleSheet('background-color:cyan;')

        label1 = QLabel('标签1',box1)
        label1.resize(200,60)
        label1.move(50,50)
        label1.setObjectName('pink')
        label1.setProperty('notice_level','warning')

        btn1 = Btn('按钮1',box1)
        btn1.move(150,50)
        btn1.setObjectName('btn1')

        cb = QCheckBox('python',box1)
        cb.move(50,100)
        cb.setTristate(True)

        label2 = QLabel('标签2',box3)
        label2.move(50,50)
        label3 = QLabel('标签3',box2)
        label3.move(200,180)
        label2.setProperty('notice_level', 'error')
        label2.resize(100, 60)
        btn2 = QPushButton('按钮2',box2)
        btn2.move(150,50)
        btn2.setObjectName('b2')
        btn2.setObjectName('btn2')

        btn2.setEnabled(False)

        v_layout = QVBoxLayout()
        self.setLayout(v_layout)

        v_layout.addWidget(box1)
        v_layout.addWidget(box2)

        # self.setStyleSheet('QPushButton{background-color:orange;}')

        # self.other_btn = QPushButton('btn3')
        # self.other_btn.show()

if __name__ == '__main__':
    import sys
    from Tool import QSSTool
    app = QApplication(sys.argv)
    window = Window()
    window.show()

    # TODO 对app设置是所有控件
    # app.setStyleSheet('QPushButton{background-color:orange;}')
    # app.setStyleSheet('QLabel#l1 {background-color:orange;}QPushButton#b2{background-color:cyan;}')
    # with open('test.qss')as f:
    #     app.setStyleSheet(f.read())
    QSSTool.setQssToObject('test.qss',app)

    sys.exit(app.exec_())

