#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 66-QCalendarWidget-功能作用.py
    time: 2022/6/30 17:36
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
        cw = QCalendarWidget(self)
        # cw.setMinimumDate(QDate(1990,1,1))
        # cw.setMaximumDate(QDate(2022,12,12))
        cw.setDateRange(QDate(1990,1,1),QDate(2022,12,12))
        # cw.setSelectedDate(QDate(-9999,1,1))

        # cw.setDateEditEnabled(False)
        cw.setDateEditAcceptDelay(3000)

        btn = QPushButton(self)
        btn.move(100,450)
        btn.setText('btn')
        # btn.clicked.connect(lambda:print(
        #     cw.monthShown(),cw.yearShown(),cw.selectedDate()
        # ))

        # cw.setNavigationBarVisible(False) # 导航条
        cw.setFirstDayOfWeek(Qt.Sunday)
        cw.setGridVisible(True)

        tcf = QTextCharFormat()
        tcf.setFontFamily('隶书')
        tcf.setFontPointSize(16)
        tcf.setFontUnderline(True)

        cw.setHeaderTextFormat(tcf)

        # cw.setHorizontalHeaderFormat(QCalendarWidget.NoHorizontalHeader)

        t_tcf = QTextCharFormat()
        t_tcf.setFontPointSize(20)
        t_tcf.setToolTip('这是星期2')

        # cw.setWeekdayTextFormat(Qt.Tuesday,t_tcf)

        # cw.setDateTextFormat(QDate(2018,12,12),tcf)
        #
        # cw.setSelectionMode(QCalendarWidget.NoSelection)
        #
        cw.setSelectedDate(QDate(2018,12,11))

        # showToday()
        # showSelectedDate()
        # showNextYear()
        # showPreviousYear()
        # showNextMonth()
        # showPreviousMonth()
        # setCurrentPage(int:year, int:month)

        # btn.clicked.connect(cw.showToday)
        btn.clicked.connect(cw.showSelectedDate)

        # cw.activated.connect(lambda val:print(val))
        # cw.clicked.connect(lambda val:print(val))
        # cw.currentPageChanged.connect(lambda y,m:print(y,m))
        cw.selectionChanged.connect(lambda :print(cw.selectedDate()))




if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())