#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 86-QWebEngineView-运行js.py
    time: 2022/7/4 21:24
    software: PyCharm
..................................
"""
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
        layout = QBoxLayout(QBoxLayout.TopToBottom,self)
        layout.setContentsMargins(0,0,0,0)
        layout.addWidget(widget)
        return layout

    def setup_ui(self):
        browser = QWebEngineView()
        layout = self.set_layout(browser, self)

        with open('test.html',encoding='utf-8')as f:
            data = f.read()
        browser.setHtml(data)
        self.browser = browser

        button = QPushButton('设置全名')
        button.clicked.connect(self.fullname)

        layout.addWidget(button)

    def js_callback(self,result):
        print(result)

    def fullname(self):
        self.value = 'hello world'
        self.browser.page().runJavaScript(f'fullname("{self.value}");',self.js_callback)



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())