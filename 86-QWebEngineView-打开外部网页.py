#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 86-QWebEngineView-打开外部网页.py
    time: 2022/7/4 20:59
    software: PyCharm
..................................
"""
import os

from PyQt5.Qt import *
from PyQt5.QtWebEngineWidgets import QWebEngineView


class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()

    @staticmethod
    def set_layout(widget,self):
        layout = QBoxLayout(QBoxLayout.LeftToRight,self)
        layout.setContentsMargins(0,0,0,0)
        layout.addWidget(widget)

    def setup_ui(self):
        browser = QWebEngineView()
        # browser.load(QUrl('https://www.tenseip.com'))
        # browser.load(QUrl.fromLocalFile(os.getcwd()+'/test.html'))
        with open('test.html',encoding='utf-8')as f:
            data = f.read()
        browser.setHtml(data)
        self.set_layout(browser,self)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())