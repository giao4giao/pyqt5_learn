#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 37-QLineEdit-验证器使用.py
    time: 2022/6/17 19:43
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class AgeVadidator(QValidator):
    def validate(self,input_str,pos_int):
        print(input_str,pos_int)
        if not input_str.isdigit():
            if not input_str:
                return (QValidator.Intermediate, input_str, pos_int)
            return (QValidator.Invalid, input_str, pos_int)

        if 18<=int(input_str)<=180:
            return (QValidator.Acceptable,input_str,pos_int)
        elif 1<=int(input_str)<=17:
            return (QValidator.Intermediate,input_str,pos_int)
        else:
            return (QValidator.Invalid,input_str,pos_int)



    def fixup(self,p_str):
        if not p_str.isdigit():
            p_str = "0"
        if int(p_str)<18:
            return "18"
        return "180"



class MyAgeVadidator(QIntValidator):
    def fixup(self,p_str):
        print(p_str)
        if not p_str.isdigit():
            p_str = "0"
        if int(p_str)<18:
            return "18"
        return "180"

class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        le = QLineEdit(self)
        le.move(100,100)

        vadidator = AgeVadidator()
        le.setValidator(vadidator)

        le2 = QLineEdit(self)
        le2.move(100,200)
        vadidator2 = MyAgeVadidator(18,180)
        le2.setValidator(vadidator2)

        le3 = QLineEdit(self)
        le3.move(100,300)

        # le3.setInputMask(">AA-99;#")
        le3.setInputMask(">9999-99999999;0")


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())