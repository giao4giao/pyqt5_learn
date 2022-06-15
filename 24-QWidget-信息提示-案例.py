#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 24-QWidget-信息提示-案例.py
    time: 2022/6/15 18:57
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QMainWindow):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('信息提示案例')
        self.resize(500,500)
        self.setup_ui()
        self.statusBar()

        self.setWindowFlags(Qt.WindowContextHelpButtonHint)


    def setup_ui(self):
        self.setStatusTip("这是窗口")
        print(self.statusTip())

        label = QLabel(self)
        label.setText("aaaaaaaaaaaaaaaaaa")
        label.setStatusTip("label")
        label.setToolTip("提示")
        print(label.toolTip())
        label.setToolTipDuration(2000)
        print(label.toolTipDuration())

        label.setWhatsThis("这是什么？是标签")





if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())