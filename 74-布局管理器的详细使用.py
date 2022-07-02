#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 74-布局管理器的详细使用.py
    time: 2022/7/1 19:52
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


    def setup_ui_old(self):
        label1= QLabel('标签1')
        label1.setStyleSheet('background-color:cyan;')
        label2= QLabel('标签2')
        label2.setStyleSheet('background-color:yellow;')
        label3= QLabel('标签3')
        label3.setStyleSheet('background-color:red;')
        label4= QLabel('标签4')
        label4.setStyleSheet('background-color:orange;')

        # layout = QBoxLayout(QBoxLayout.RightToLeft)
        layout = QBoxLayout(QBoxLayout.TopToBottom)

        self.setLayout(layout)

        layout.addWidget(label1)
        layout.addWidget(label2)
        layout.addWidget(label3)


        layout.setSpacing(60)

        # QMargins
        print(layout.contentsMargins().left())
        print(layout.contentsMargins().right())

        layout.setContentsMargins(20,30,40,50)


        # TODO 前面的解决方法好像找到了
        layout.replaceWidget(label2,label4)
        label2.destroyed.connect(lambda :print('标签2释放了'))
        # label2.hide()
        label2.setParent(None)
        print(label2.parent())

        label5= QLabel('标签5')
        label5.setStyleSheet('background-color:pink;')
        label6= QLabel('标签6')
        label6.setStyleSheet('background-color:blue;')
        label7= QLabel('标签7')
        label7.setStyleSheet('background-color:cyan;')


    def setup_ui(self):
        label1= QLabel('标签1')
        label1.setStyleSheet('background-color:cyan;')
        label2= QLabel('标签2')
        label2.setStyleSheet('background-color:yellow;')
        label3= QLabel('标签3')
        label3.setStyleSheet('background-color:red;')
        label4= QLabel('标签4')
        label4.setStyleSheet('background-color:orange;')

        # layout = QBoxLayout(QBoxLayout.RightToLeft)
        layout = QBoxLayout(QBoxLayout.TopToBottom)

        self.setLayout(layout)



        label5= QLabel('标签5')
        label5.setStyleSheet('background-color:pink;')
        label6= QLabel('标签6')
        label6.setStyleSheet('background-color:blue;')
        label7= QLabel('标签7')
        label7.setStyleSheet('background-color:cyan;')

        h_layout = QBoxLayout(QBoxLayout.LeftToRight)
        h_layout.addWidget(label5)
        h_layout.addWidget(label6)
        h_layout.addWidget(label7)

        layout.addWidget(label1)
        layout.addLayout(h_layout)
        layout.addWidget(label2)
        layout.addWidget(label3)

        layout.setEnabled(False)
        layout.setEnabled(True)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())