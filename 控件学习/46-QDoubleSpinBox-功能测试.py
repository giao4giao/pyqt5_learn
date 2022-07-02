#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 46-QDoubleSpinBox-功能测试.py
    time: 2022/6/29 13:23
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class MyQDoubleSpinBox(QDoubleSpinBox):
    def textFromValue(self, v: float):
        return str(v)+"*"



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        qds = MyQDoubleSpinBox(self)
        self.qds =qds
        qds.resize(150,50)
        qds.move(150,50)

        test_btn = QPushButton(self)
        test_btn.move(200,200)
        test_btn.setText("test")
        test_btn.clicked.connect(self.btn_test)

        # # 0.00 -99.99
        # qds.setMaximum(88.88)
        # qds.setMinimum(22.22)
        #
        # qds.setSingleStep(0.02)
        #
        # qds.setWrapping(True)
        #
        # qds.setPrefix('$')


        # qds.setRange(1.0,2.0)
        # qds.setSingleStep(0.5)
        # qds.setSuffix('倍数')
        # qds.setSpecialValueText('正常')
        # qds.setWrapping(True)
        #
        # qds.setDecimals(1)

        qds.valueChanged.connect(lambda val:print(val))
        qds.valueChanged[str].connect(lambda val:print(val))


    def btn_test(self):
        # self.qds.setValue(66.666)
        print(self.qds.value(),type(self.qds.value()))
        print(self.qds.cleanText(),type(self.qds.cleanText()))



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())