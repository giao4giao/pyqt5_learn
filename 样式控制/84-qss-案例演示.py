#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 84-qss-案例演示.py
    time: 2022/7/3 14:08
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('案例演示')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        # w = QPushButton('按钮',self)
        # w = QRadioButton('按钮',self)
        # w = QLineEdit('按钮',self)
        # w.setEchoMode(QLineEdit.Password)
        # w.setReadOnly(True)
        # w.resize(200, 200)

        """
        # w = QTextEdit('按钮',self)
        # w = QSpinBox(self)
        w = QComboBox(self)
        # w.setEditable(True)
        w.addItems(['1','2','333','4'])
        w.resize(200, 40)
        """
        # w = QSlider(Qt.Horizontal,self)
        w = QProgressBar(self)
        w.setValue(60)

        w.resize(200, 40)


        w.move(100,100)



if __name__ == '__main__':
    import sys
    from Tool import QSSTool
    app = QApplication(sys.argv)
    window = Window()
    window.show()

    QSSTool.setQssToObject('demo.qss',app)

    sys.exit(app.exec_())


