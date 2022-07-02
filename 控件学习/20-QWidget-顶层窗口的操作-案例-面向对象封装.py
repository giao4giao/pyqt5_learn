#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 20-QWidget-顶层窗口的操作-案例-面向对象封装.py
    time: 2022/6/15 16:55
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('顶层窗口的操作-案例')
        self.resize(500,500)

        self.setWindowFlags(Qt.FramelessWindowHint)
        self.setWindowOpacity(0.9)

        self.top_margin = 10
        self.btn_w = 80
        self.btn_h = 40
        self.is_btn_press = False
        self.pos_x = self.x()
        self.pos_y = self.y()
        self.mouse_x = 0
        self.mouse_y = 0

        self.setup_ui()


    def setup_ui(self):
        # 3个按钮
        self.close_btn = QPushButton(self)
        self.close_btn.setText("关闭")
        self.close_btn.resize(self.btn_w, self.btn_h)
        self.close_btn.show()

        self.max_btn = QPushButton(self)
        self.max_btn.setText("最大化")
        self.max_btn.resize(self.btn_w, self.btn_h)
        self.max_btn.show()

        self.min_btn = QPushButton(self)
        self.min_btn.setText("最小化")
        self.min_btn.resize(self.btn_w, self.btn_h)
        self.min_btn.show()

        self.close_btn.pressed.connect(self.close)
        self.max_btn.pressed.connect(self.max_normal)
        self.min_btn.pressed.connect(self.showMinimized)

    def close(self) -> None:
        super().close()

    def resizeEvent(self, event):
        close_btn_w = self.close_btn.width()
        window_w = self.width()
        close_btn_x = window_w - close_btn_w
        close_btn_y = self.top_margin
        self.close_btn.move(close_btn_x, close_btn_y)

        max_btn_x = close_btn_x - self.max_btn.width()
        max_btn_y = self.top_margin
        self.max_btn.move(max_btn_x, max_btn_y)

        self.min_btn_x = max_btn_x - self.min_btn.width()
        min_btn_y = self.top_margin
        self.min_btn.move(self.min_btn_x, min_btn_y)


    def max_normal(self):
        if window.isMaximized():
            window.showNormal()
            self.max_btn.setText("最大化")
        else:
            window.showMaximized()
            self.max_btn.setText("恢复")


    def mousePressEvent(self, evt):
        # QMouseEvent
        if evt.button() == Qt.LeftButton:
            self.is_btn_press = True
            self.mouse_x = evt.globalX()
            self.mouse_y = evt.globalY()
            self.pos_x = self.x()
            self.pos_y = self.y()
        else:
            self.is_btn_press = False

    def mouseMoveEvent(self, evt):
        if self.is_btn_press:
            self.move(self.pos_x-(self.mouse_x-evt.globalX()),self.pos_y-(self.mouse_y-evt.globalY()))

    def mouseReleaseEvent(self, event):
        self.is_btn_press = False

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())