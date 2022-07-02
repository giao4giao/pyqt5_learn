#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 53-QFontComboBox-功能作用.py
    time: 2022/6/29 17:21
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QFontComboBox-功能作用')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        label = QLabel(self)
        label.setText('aaaaa')
        label.move(200,200)


        fcb = QFontComboBox(self)
        fcb.currentFontChanged.connect(lambda font:label.setFont(font))
        fcb.setEditable(False)





if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())