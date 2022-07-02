#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 70-QErrorMessage-功能作用.py
    time: 2022/7/1 15:53
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
        # em = QErrorMessage(self)
        # em.setWindowTitle('错误提示')
        # # em.exec()
        # for i in range(3):
        #     em.showMessage(f'shehuia{i//2}')
        #
        # em.open()

        # QErrorMessage.qtHandler()
        # # qDebug('xxx')
        # qWarning('zzzz')
        pass

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()

    QErrorMessage.qtHandler()
    # qDebug('xxx')
    qWarning('zzzz')

    sys.exit(app.exec_())