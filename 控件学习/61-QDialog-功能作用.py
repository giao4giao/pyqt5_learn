#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 61-QDialog-功能作用.py
    time: 2022/6/30 13:22
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


window = QWidget()
window.setWindowTitle("QDialog")
window.resize(500,500)

d=QDialog(window)
d.setWindowTitle('对话框')


btn1 = QPushButton(d)
btn1.setText('btn1')
btn1.move(20,50)
btn1.clicked.connect(lambda :d.accept())

btn2 = QPushButton(d)
btn2.setText('btn2')
btn2.move(200,50)
btn2.clicked.connect(lambda :d.reject())

btn3 = QPushButton(d)
btn3.setText('btn3')
btn3.move(380,50)
btn3.clicked.connect(lambda :d.done(8))

btn4 = QPushButton(d)
btn4.setText('btn4')
btn4.move(20,100)
btn4.clicked.connect(lambda :d.setResult(888))

btn5 = QPushButton(d)
btn5.setText('btn5')
btn5.move(200,100)
btn5.clicked.connect(lambda :print(d.result()))

d.accepted.connect(lambda:print('点击了，接受按钮'))
d.rejected.connect(lambda:print('点击了，拒绝按钮'))
d.finished.connect(lambda val:print('点击了，完成按钮',val))


# d.exec_()
# d.open()

# d.setModal(True)
# d.setWindowModality(Qt.WindowModal)
# d.setSizeGripEnabled(True)
# d.show()

result = d.exec_()
print(result)

window.show()
sys.exit(app.exec_())