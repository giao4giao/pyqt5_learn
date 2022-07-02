#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 19-QWidget-顶层窗口的操作-案例.py
    time: 2022/6/15 16:38
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import sys


app = QApplication(sys.argv)


# window = QWidget(flags=Qt.FramelessWindowHint)
window = QWidget()
window.setWindowFlags(Qt.FramelessWindowHint)
window.setWindowOpacity(1)


window.setWindowTitle("顶层窗口的操作-案例")
window.resize(500,500)

# 3个按钮
top_margin = 10
btn_w = 80
btn_h = 40


close_btn = QPushButton(window)
close_btn.setText("关闭")
close_btn.resize(btn_w,btn_h)
close_btn.show()
close_btn_w = close_btn.width()
window_w = window.width()
close_btn_x = window_w-close_btn_w
close_btn_y = top_margin
close_btn.move(close_btn_x,close_btn_y)


max_btn = QPushButton(window)
max_btn.setText("最大化")
max_btn.resize(btn_w,btn_h)
max_btn.show()
max_btn_x = close_btn_x - max_btn.width()
max_btn_y = top_margin
max_btn.move(max_btn_x,max_btn_y)


min_btn = QPushButton(window)
min_btn.setText("最小化")
min_btn.resize(btn_w,btn_h)
min_btn.show()
min_btn_x = max_btn_x - min_btn.width()
min_btn_y = top_margin
min_btn.move(min_btn_x,min_btn_y)

def max_normal():
    if window.isMaximized():
        window.showNormal()
        max_btn.setText("最大化")
    else:
        window.showMaximized()
        max_btn.setText("恢复")


close_btn.pressed.connect(window.close)
max_btn.pressed.connect(max_normal)
min_btn.pressed.connect(window.showMinimized)

window.show()
sys.exit(app.exec_())