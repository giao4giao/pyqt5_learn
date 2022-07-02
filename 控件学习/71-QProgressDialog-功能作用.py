#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 71-QProgressDialog-功能作用.py
    time: 2022/7/1 16:01
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QProgressDialog')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        # pd = QProgressDialog(self)
        # # pd = QProgressDialog('xx1','xx2',1,1000,self)
        # pd.setWindowTitle('xx3')
        # # pd.setAutoClose(False)
        # # pd.setAutoReset(False)
        # # pd.open(lambda:print('关闭了'))
        # pd.show()
        # # pd.setMinimumDuration(0) # 等待时间
        # for i in range(1,101):
        #     pd.setValue(i)

        pd = QProgressDialog(self)
        pd.setWindowTitle('xx3')
        pd.setLabelText('下载进度')
        pd.setCancelButtonText('取消下载')

        pd.setRange(0,100)
        # print(pd.minimum())
        # print(pd.maximum())

        timer = QTimer(pd)
        def test():
            if (pd.value()+1) >= pd.maximum() or pd.wasCanceled():
                timer.stop()
            pd.setValue(pd.value() + 1)

            if pd.value() == 98:
                pd.cancel()

        timer.timeout.connect(test)
        timer.start(100)

        pd.canceled.connect(timer.stop)

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())





