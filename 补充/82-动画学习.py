#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 82-动画学习.py
    time: 2022/7/4 9:57
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('动画学习')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        btn = QPushButton('test',self)
        btn.move(100,100)
        btn.resize(200,200)
        btn.setStyleSheet('background-color:cyan;')


        '''        
        # animation = QPropertyAnimation(self)
        # animation.setTargetObject(btn)
        # animation.setPropertyName(b'pos')
        animation = QPropertyAnimation(btn,b'pos',self)



        animation.setStartValue(QPoint(0,0))
        animation.setEndValue(QPoint(300,0))
        '''
        # animation = QPropertyAnimation(btn,b'size',self)
        # animation.setStartValue(QSize(0,0))
        # animation.setEndValue(QSize(300,300))

        # animation = QPropertyAnimation(btn,b'geometry',self)
        # animation.setStartValue(QRect(0,0,100,100))
        # animation.setEndValue(QRect(200,200,300,300))

        # animation = QPropertyAnimation(self,b'windowOpacity',self)
        # animation.setStartValue(1)
        # animation.setKeyValueAt(0.5,0.5)
        # animation.setKeyValueAt(1,1)
        # # animation.setEndValue(0)

        animation = QPropertyAnimation(btn,b'pos',self)
        animation.setStartValue(QPoint(0,0))
        animation.setEndValue(QPoint(300,300))


        animation.setDuration(1000)

        animation.setLoopCount(3)

        # https://doc.qt.io/qt-5/qeasingcurve.html
        animation.setEasingCurve(QEasingCurve.InBounce)

        animation.setDirection(QAbstractAnimation.Backward)

        animation.start()

        print(animation.totalDuration(), animation.duration())

        self.flag = True
        def animation_operation():
            # if self.flag:
            #     animation.pause()
            #     self.flag = False
            # else:
            #     animation.resume()
            #     self.flay = True
            if animation.state()==QAbstractAnimation.Running:
                animation.pause()
            elif animation.state()==QAbstractAnimation.Paused:
                animation.resume()
            # elif animation.state()==QAbstractAnimation.stopped:
            #     animation.start()


        # btn.clicked.connect(lambda:print(animation.loopCount(),animation.currentLoop()))
        # btn.clicked.connect(lambda:print(animation.currentLoopTime(),animation.currentTime()))
        btn.clicked.connect(animation_operation)

        animation.currentLoopChanged.connect(lambda val :print('当前循环次数',val))
        animation.finished.connect(lambda :print('finished'))
        animation.stateChanged.connect(lambda ns,os:print('状态改变',ns,os))


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())