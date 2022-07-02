#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 65-QInputDialog-功能作用.py
    time: 2022/6/30 17:11
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QInputDialog')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        input_d = QInputDialog(self,Qt.FramelessWindowHint)

        # input_d.setInputMode(QInputDialog.IntInput)
        input_d.setInputMode(QInputDialog.DoubleInput)
        # input_d.setInputMode(QInputDialog.TextInput)


        input_d.setComboBoxItems(['abc','dd','aa'])


        # input_d.intValueChanged.connect(lambda val:print('changed',val))
        # input_d.intValueSelected.connect(lambda val:print('selecet',val))

        input_d.doubleValueChanged.connect(lambda val:print('changed',val))
        input_d.doubleValueSelected.connect(lambda val:print('selecet',val))

        input_d.show()


    def setup_ui_old(self):
        # result = QInputDialog.getInt(self,'xx1','xx2',888,step=8)
        # result = QInputDialog.getDouble(self,'xx1','xx2',888.88,decimals=2)
        # result = QInputDialog.getText(self,'xx1','xx2',echo=QLineEdit.Password)
        # result = QInputDialog.getMultiLineText(self,'xx1','xx2','default')
        # result = QInputDialog.getItem(self,'xx1','xx2',['1','2','3'],2,True)
        # print(result)

        input_d = QInputDialog(self,Qt.FramelessWindowHint)
        # input_d.setOption(QInputDialog.UseListViewForComboBoxItems)
        # input_d.setComboBoxItems(['1','2','abc'])

        input_d.setLabelText('输入姓名:')
        input_d.setOkButtonText('好的')
        input_d.setCancelButtonText('点我取消')

        input_d.setInputMode(QInputDialog.DoubleInput)
        input_d.setInputMode(QInputDialog.TextInput)
        input_d.setDoubleRange(0,100)
        input_d.setDoubleStep(2)
        input_d.setDoubleDecimals(3)

        input_d.setComboBoxItems(['abc','dd','aa'])
        input_d.setComboBoxEditable(True)

        input_d.show()


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())





