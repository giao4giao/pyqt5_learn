#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 45-QSpinBox-功能测试.py
    time: 2022/6/29 12:57
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class MyQSpinBox(QSpinBox):
    def textFromValue(self,p_int):
        """自定义展示格式"""
        print(p_int)
        return '*'*len(str(p_int))



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        sb = MyQSpinBox(self)
        self.sb =sb
        sb.resize(150,50)
        sb.move(150,50)

        test_btn = QPushButton(self)
        test_btn.move(200,200)
        test_btn.setText("test")
        test_btn.clicked.connect(self.btn_test)


        # sb.valueChanged.connect(lambda val:print(type(val),val))
        sb.valueChanged[str].connect(lambda val:print(type(val),val))

        self.maxmin()

    def btn_test(self):
        # self.around_mode()
        # self.set_step()
        # self.set_pre_suf()
        # self.set_display()
        self.set_value()

    def set_value(self):
        """设置和获取数值"""
        self.sb.setPrefix('aa')
        self.sb.setRange(0,9)
        # self.sb.setValue(66)
        print(self.sb.value())
        print(self.sb.text())

    def set_display(self):
        """显示基数(进制)"""
        print(self.sb.displayIntegerBase())
        self.sb.setDisplayIntegerBase(2)
        print(self.sb.displayIntegerBase())


    def set_pre_suf(self):
        """前缀和后缀"""
        # self.sb.setRange(1,12)
        # self.sb.setSuffix("月")
        self.sb.setRange(0,6)
        self.sb.setPrefix("周")
        self.sb.setSpecialValueText("周日")

    def set_step(self):
        """设置步长"""
        self.sb.setSingleStep(3)

    def around_mode(self):
        """数值循环"""
        print(self.sb.wrapping())
        self.sb.setWrapping(True)
        print(self.sb.wrapping())


    def maxmin(self):
        """最大值最小值"""
        # self.sb.setMaximum(180)
        # print(self.sb.maximum())
        # self.sb.setMinimum(18)
        # print(self.sb.minimum())
        self.sb.setRange(18,180)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())




