#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: test.py
    time: 2022/6/15 13:59
    software: PyCharm
..................................
"""

# from PyQt5.Qt import *
# import sys
#
#
# app = QApplication(sys.argv)
#
#
# window = QWidget()
# window.setWindowTitle("")
# window.resize(500,500)
#
#
# window.show()
# sys.exit(app.exec_())


from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        pass




if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())