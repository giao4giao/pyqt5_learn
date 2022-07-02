#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 32-QButtonGroup-使用.py
    time: 2022/6/16 20:53
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


window = QWidget()
window.setWindowTitle("按钮使用")
window.resize(500,500)

rb_nan = QRadioButton("男", window)
rb_nan.move(100, 100)
rb_nan.setChecked(True)
rb_nv = QRadioButton("女", window)
rb_nv.move(100, 200)

sex_group = QButtonGroup(window)
sex_group.addButton(rb_nan,id=1)
sex_group.addButton(rb_nv,id=2)

# sex_group.removeButton(rb_nv)

print(sex_group)
print(sex_group.button(2))
print(sex_group.checkedButton())

rb_yes = QRadioButton("yes", window)
rb_yes.move(400, 100)
rb_no = QRadioButton("no", window)
rb_no.move(400, 200)

answer_group = QButtonGroup(window)
answer_group.addButton(rb_yes)
answer_group.addButton(rb_no)


answer_group.setId(rb_yes,1)
answer_group.setId(rb_no,2)

print(answer_group.id(rb_yes))
print(answer_group.id(rb_no))
rb_no.setChecked(True)
print(answer_group.checkedId())

sex_group.setExclusive(False)
print(sex_group.exclusive())

# answer_group.buttonToggled.connect(lambda a:print(a))
answer_group.buttonClicked[int].connect(lambda a:print(a))
# answer_group.buttonClicked.connect(lambda a:print(answer_group.id(a)))


window.show()
sys.exit(app.exec_())