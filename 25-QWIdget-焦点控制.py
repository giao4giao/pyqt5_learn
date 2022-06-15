#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 25-QWIdget-焦点控制.py
    time: 2022/6/15 19:15
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

    def mousePressEvent(self, evt):
        print(self.focusWidget())
        # self.focusNextChild()
        # self.focusPreviousChild()
        # self.focusNextPrevChild(True) # self.focusNextChild()



    def setup_ui(self):
        self.le1 = QLineEdit(self)
        self.le1.move(100,100)

        self.le2 = QLineEdit(self)
        self.le2.move(100, 200)

        self.le3 = QLineEdit(self)
        self.le3.move(100, 300)

        # self.le2.setFocus()
        self.le2.clearFocus()
        # self.le2.setFocusPolicy(Qt.TabFocus)
        # self.le2.setFocusPolicy(Qt.ClickFocus)
        self.le2.setFocusPolicy(Qt.StrongFocus)

        self.setTabOrder(self.le1,self.le3)
        self.setTabOrder(self.le3,self.le2)





if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()

    print(window.focusWidget())

    sys.exit(app.exec_())