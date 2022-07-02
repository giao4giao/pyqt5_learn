#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 23-QWidget-交互状态-案例.py
    time: 2022/6/15 18:14
    software: PyCharm
..................................
"""

from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('交互状态案例')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        self.label = QLabel(self)
        self.label.setText("label")
        self.label.move(100,75)
        self.label.hide()

        self.le = QLineEdit(self)
        self.le.setText("text")
        self.le.move(100, 150)

        self.btn = QPushButton(self)
        self.btn.setText("login")
        self.btn.move(100, 225)
        self.btn.setEnabled(False)

        self.le.textChanged.connect(self.text_cao)
        self.btn.clicked.connect(self.click_cao)

    def click_cao(self):
        content = self.le.text()
        self.label.show()
        if content=="a":
            self.label.setText("success")
        else:
            self.label.setText("failed")
        self.label.adjustSize()

    def text_cao(self,text):
        self.btn.setEnabled(len(text)>0)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())