#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 44-QAbstractSpinBox-功能作用.py
    time: 2022/6/28 19:14
    software: PyCharm
..................................
"""

from PyQt5.Qt import *

class MyQAbstractSpinBox(QAbstractSpinBox):
    def __init__(self,parnent=None,num=0,*args,**kwargs):
        super().__init__(parnent,*args,**kwargs)
        self.lineEdit().setText(str(num))

    def stepEnabled(self):
        # 0 -- 9
        current_num = int(self.text())
        if current_num == 0:
            return QAbstractSpinBox.StepUpEnabled
        elif current_num == 9:
            return QAbstractSpinBox.StepDownEnabled
        elif current_num < 0 or current_num >9:
            return QAbstractSpinBox.StepNone
        else:
            return QAbstractSpinBox.StepUpEnabled | QAbstractSpinBox.StepDownEnabled

    def stepBy(self,p_int):
        print(p_int)
        current_num = int(self.text())+p_int
        self.lineEdit().setText(str(current_num))



class MyQAbstractSpinBox2(QAbstractSpinBox):
    def __init__(self,parnent=None,num=0,*args,**kwargs):
        super().__init__(parnent,*args,**kwargs)
        self.lineEdit().setText(str(num))

    def stepEnabled(self):
        return QAbstractSpinBox.StepUpEnabled | QAbstractSpinBox.StepDownEnabled

    def stepBy(self,p_int):
        print(p_int)
        current_num = int(self.text())+p_int
        self.lineEdit().setText(str(current_num))



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QAbstractSpinBox')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        abs = MyQAbstractSpinBox2(self)
        self.abs = abs
        abs.resize(150,50)
        abs.move(150,50)

        # abs.setAccelerated(True)
        # print(abs.isAccelerated())
        #
        # print(abs.isReadOnly())
        # abs.setReadOnly(True)

        test_btn = QPushButton(self)
        test_btn.move(200,200)
        test_btn.setText("test")
        test_btn.clicked.connect(self.btn_test)

    def btn_test(self):
        print(self.abs.text())
        print(self.abs.lineEdit().text())
        # self.abs.lineEdit().setText('12345')
        ca = QCompleter(['sz','123','22'],self.abs)
        self.abs.lineEdit().setCompleter(ca)

        # self.abs.lineEdit().setAlignment(Qt.AlignCenter)
        self.abs.setAlignment(Qt.AlignCenter)

        print(self.abs.hasFrame())
        self.abs.setFrame(False)

        # self.abs.clear()


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())

