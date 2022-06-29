#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 48-日期时间的学习.py
    time: 2022/6/29 13:44
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
        """
        QDateTime
        QDate
        QTime
        """

        ##QDateTime
        # # dt = QDateTime(2018,12,12,12,30)
        # dt = QDateTime.currentDateTime()
        # # dt = dt.addYears(-2)
        # print(dt)
        # print(dt.offsetFromUtc())
        # QDateTimeEdit(dt,self)


        # TODO 可以用来实现软件开启的时间
        time = QTime.currentTime()
        time.start()

        test_btn = QPushButton(self)
        test_btn.move(200,200)
        test_btn.setText("test")
        test_btn.clicked.connect(lambda:print(time.elapsed()))


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())