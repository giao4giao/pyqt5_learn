#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 73-布局管理.py
    time: 2022/7/1 16:51
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
        label1= QLabel('1',self)
        label1.setStyleSheet('background-color:cyan;')
        label2= QLabel('2',self)
        label2.setStyleSheet('background-color:yellow;')
        label3= QLabel('3',self)
        label3.setStyleSheet('background-color:red;')

        labels = self.findChildren(QLabel)
        label_width = self.width()
        label_height = self.height()/len(labels)

        for num,label in enumerate(labels):
            label.resize(label_width,int(label_height))
            label.move(0,int(label_height*num))


        timer = QTimer(self)
        timer.timeout.connect(lambda:label1.setText(label1.text()+'itlike\n'))
        timer.start(1000)

    def setup_ui(self):
        label1= QLabel('1')
        label1.setStyleSheet('background-color:cyan;')
        label2= QLabel('2')
        label2.setStyleSheet('background-color:yellow;')
        label3= QLabel('3')
        label3.setStyleSheet('background-color:red;')

        # v_layout = QVBoxLayout()
        v_layout = QHBoxLayout()
        v_layout.addWidget(label1)
        v_layout.addWidget(label2)
        v_layout.addWidget(label3)

        v_layout.setContentsMargins(20,30,40,50)    # 外边距 左上右下
        v_layout.setSpacing(60)                     # 内边距

        self.setLayoutDirection(Qt.RightToLeft)

        self.setLayout(v_layout)

        # label2.hide()

        # timer = QTimer(self)
        # timer.timeout.connect(lambda:label1.setText(label1.text()+'itlike\n'))
        # timer.start(1000)

        print(self.children())



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())