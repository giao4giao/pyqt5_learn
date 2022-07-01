#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 68-QLCDNumber-功能作用.py
    time: 2022/7/1 15:19
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QLCDNumber')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        # lcd = QLCDNumber(self)
        lcd = QLCDNumber(5,self)
        lcd.move(100,100)
        lcd.resize(300,100)

        lcd.setDigitCount(6)


        # 0 / O, 1, 2, 3, 4, 5 / S, 6, 7, 8, 9 / g
        # A, B, C, D, E, F, h, H, L, o, P, r, u, U, Y
        # : ' 空格

        # lcd.display('12345')
        # lcd.display(123456)
        # lcd.display(12344.234)
        lcd.display(3333333)

        lcd.setMode(QLCDNumber.Hex)

        btn = QPushButton(self)
        btn.setText('test')
        btn.move(50,50)
        btn.clicked.connect(lambda:print(lcd.value()))
        btn.clicked.connect(lambda:print(lcd.intValue()))

        print(lcd.checkOverflow(99))
        print(lcd.checkOverflow(944444449))

        lcd.overflow.connect(lambda:print('overflow'))

        lcd.setSegmentStyle(QLCDNumber.Outline)

        lcd2 = QLCDNumber(5,self)
        lcd2.move(100,200)
        lcd2.resize(300,100)

        lcd2.setSegmentStyle(QLCDNumber.Filled)

        lcd3 = QLCDNumber(5,self)
        lcd3.move(100,300)
        lcd3.resize(300,100)

        lcd3.setSegmentStyle(QLCDNumber.Flat)



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())



