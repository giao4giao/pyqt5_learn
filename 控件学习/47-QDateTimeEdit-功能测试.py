#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 47-QDateTimeEdit-功能测试.py
    time: 2022/6/29 13:40
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
        dte = QDateTimeEdit(QDateTime.currentDateTime(),self)
        # dte = QDateTimeEdit(QDate.currentDate(),self)
        # dte = QDateTimeEdit(QTime.currentTime(),self)
        dte.move(50,50)
        self.dte = dte

        test_btn = QPushButton(self)
        test_btn.move(200,200)
        test_btn.setText("test")
        test_btn.clicked.connect(self.btn_test)

        print(dte.displayFormat())
        dte.setDisplayFormat('yy-MM-dd $ m:ss:zzz')

        dte.dateTimeChanged.connect(lambda a:print('datetime',a))
        dte.dateChanged.connect(lambda a:print('date',a))
        dte.timeChanged.connect(lambda a:print('time',a))

    def btn_test(self):
        # print(dte.currentSectionIndex())

        # self.dte.setFocus()
        # print(self.dte.setCurrentSectionIndex(3))
        # print(self.dte.sectionText(QDateTimeEdit.DaySection))

        # self.dte.setMaximumDateTime(QDateTime(2020,8,15,12,30))
        self.dte.setDateTimeRange(
            QDateTime.currentDateTime().addDays(-3),
            QDateTime.currentDateTime().addDays(3)
        )
        self.dte.setCalendarPopup(True)
        # print(self.dte.dateTime())
        # print(self.dte.date())
        # print(self.dte.time())

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())









