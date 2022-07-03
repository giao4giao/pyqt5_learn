#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 82-background-qss-demo.py
    time: 2022/7/3 11:48
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
        h_layout = QHBoxLayout(self)
        # self.setLayout(h_layout)
        for i in range(0,13):
            btn = QPushButton()
            # btn.resize(90,115)
            btn.setFixedSize(90,115)

            txt = f"""
                QPushButton{{
                    background-image:url(puke.png);
                    border:20px double red;
                    background-origin:content;
                    background-clip:padding;
                    padding-left:-{50*i}px;
                    padding-top:-{70}px;
                }}
            """

            btn.setStyleSheet(txt)
            h_layout.addWidget(btn)



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())





