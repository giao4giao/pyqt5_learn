#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 75-QBoyLayout-功能作用.py
    time: 2022/7/1 20:09
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QBoxLayout')
        self.resize(500,500)
        self.setup_ui()

    def setup_ui(self):
        label1= QLabel('标签1')
        label1.setStyleSheet('background-color:cyan;')
        label2= QLabel('标签2')
        label2.setStyleSheet('background-color:yellow;')
        label3= QLabel('标签3')
        label3.setStyleSheet('background-color:red;')

        layout = QBoxLayout(QBoxLayout.LeftToRight)

        self.setLayout(layout)

        # layout.addWidget(label1,1)
        # layout.addStretch(2)
        # layout.addWidget(label2,1)
        # layout.addStretch(1)
        # layout.addWidget(label3,1)

        layout.addWidget(label1)
        layout.addStretch()
        layout.addWidget(label2)
        layout.addStretch()
        layout.addWidget(label3)

        layout.setStretchFactor(label2,1)


    def setup_ui_old(self):
        label1= QLabel('标签1')
        label1.setStyleSheet('background-color:cyan;')
        label2= QLabel('标签2')
        label2.setStyleSheet('background-color:yellow;')
        label3= QLabel('标签3')
        label3.setStyleSheet('background-color:red;')
        label4= QLabel('标签4')
        label4.setStyleSheet('background-color:orange;')

        layout = QBoxLayout(QBoxLayout.LeftToRight)

        self.setLayout(layout)

        layout.addWidget(label1)
        layout.addSpacing(100)
        layout.addWidget(label2)
        layout.addWidget(label3)

        layout.insertWidget(1,label4)
        layout.insertSpacing(1,50)

        label5= QLabel('标签5')
        label5.setStyleSheet('background-color:pink;')
        label6= QLabel('标签6')
        label6.setStyleSheet('background-color:blue;')
        label7= QLabel('标签7')
        label7.setStyleSheet('background-color:cyan;')


        h_layout = QBoxLayout(QBoxLayout.TopToBottom)
        h_layout.addWidget(label5)
        h_layout.addWidget(label6)
        h_layout.addWidget(label7)

        layout.insertLayout(2,h_layout)

        # label1.hide()
        # layout.removeWidget(label1)
        # label1.setParent(None)

        # TODO 好玩的改变布局
        # timer = QTimer(self)
        # def test():
        #     layout.setDirection((layout.direction()+1)%4)
        #
        # timer.timeout.connect(test)
        # timer.start(1000)



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())