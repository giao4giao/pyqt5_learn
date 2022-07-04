#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 83-QparallelAnimationGroup-动画组.py
    time: 2022/7/4 17:10
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(800,800)
        self.setup_ui()


    def setup_ui(self):
        red_btn = QPushButton('红色按钮',self)
        green_btn = QPushButton('绿色按钮',self)

        red_btn.resize(100,100)
        green_btn.resize(100,100)

        green_btn.move(100,100)

        red_btn.setStyleSheet("background-color:red")
        green_btn.setStyleSheet("background-color:green")

        animation = QPropertyAnimation(green_btn,b'pos',self)

        animation.setKeyValueAt(0,QPoint(150,150))
        animation.setKeyValueAt(0.25,QPoint(550,150))
        animation.setKeyValueAt(0.5,QPoint(550,550))
        animation.setKeyValueAt(0.75,QPoint(150,550))
        animation.setKeyValueAt(1,QPoint(150,150))

        animation.setDuration(5000)

        # animation.start()

        animation2 = QPropertyAnimation(red_btn,b'pos',self)

        animation2.setKeyValueAt(0,QPoint(0,0))
        animation2.setKeyValueAt(0.25,QPoint(0,700))
        animation2.setKeyValueAt(0.5,QPoint(700,700))
        animation2.setKeyValueAt(0.75,QPoint(700,0))
        animation2.setKeyValueAt(1,QPoint(0,0))

        animation2.setDuration(5000)

        # animation2.start()

        # animation_group1 = QParallelAnimationGroup(self)
        animation_group1 = QSequentialAnimationGroup(self)
        animation_group1.addAnimation(animation)

        # animation_group1.addPause(1000)
        pasues_animation = QPauseAnimation()
        pasues_animation.setDuration(1000)
        animation_group1.addAnimation(pasues_animation)


        animation_group1.addAnimation(animation2)
        animation_group1.start()

        red_btn.clicked.connect(animation_group1.pause)
        green_btn.clicked.connect(animation_group1.resume)



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())