#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 43-QKeySequenceEdit-功能测试.py
    time: 2022/6/20 19:35
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QKeySequenceEdit')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        kse = QKeySequenceEdit(self)
        # ks = QKeySequence("Ctrl+C")
        # ks = QKeySequence(QKeySequence.Copy)
        ks = QKeySequence(Qt.CTRL+Qt.Key_C,Qt.CTRL+Qt.Key_A)
        kse.setKeySequence(ks)
        kse.clear()

        btn = QPushButton(self)
        btn.move(100,100)
        btn.setText('btn')
        btn.clicked.connect(lambda:print(kse.keySequence().toString(),kse.keySequence().count()))

        kse.editingFinished.connect(lambda:print("js"))
        kse.keySequenceChanged.connect(lambda key_value:print("change",key_value.toString()))


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())








