#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 83-三方标样式.py
    time: 2022/7/3 14:01
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        layout = QVBoxLayout(self)
        label = QLabel('xxxx')
        layout.addWidget(label)

        btn = QPushButton('xxx2')
        layout.addWidget(btn)

        cb = QComboBox()
        cb.addItems(['1','2','3'])
        layout.addWidget(cb)

        sb = QSpinBox()
        layout.addWidget(sb)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    import qdarkgraystyle
    style_sheet = qdarkgraystyle.load_stylesheet_pyqt5()
    print(style_sheet)

    app.setStyleSheet(style_sheet)

    sys.exit(app.exec_())