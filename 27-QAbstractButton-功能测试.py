#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 27-QAbstractButton-功能测试.py
    time: 2022/6/15 19:45
    software: PyCharm
..................................
"""
from PyQt5.Qt import *
import math


class Btn(QPushButton):
    def hitButton(self,point):
        # print(point)
        # return point.x()>self.width()/2
        distance = math.sqrt(math.pow(point.x()-self.width()/2,2)+math.pow(point.y()-self.height()/2,2))
        return distance<self.width()/2

    def paintEvent(self,evt):
        super().paintEvent(evt)
        painter = QPainter(self)
        painter.setPen(QPen(QColor(100,150,200),6))
        painter.drawEllipse(self.rect())

class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()

    def plus_one(self):
        print("+1")
        self.btn.setText(str(1+int(self.btn.text())))

    def ico_mode(self):
        icon = QIcon("xxx.png")
        self.btn.setIcon(icon)
        size = QSize(50,50)
        self.btn.setIconSize(size)

    def shortcut_mode(self):
        self.btn.pressed.connect(lambda :print("click"))
        # self.btn.setText("&abc")
        self.btn.setShortcut("Alt+a")

    def report_mode(self):
        self.btn.setAutoRepeat(True)
        print(self.btn.autoRepeat())
        self.btn.setAutoRepeatDelay(2000)
        self.btn.setAutoRepeatInterval(100)
        print(self.btn.autoRepeatDelay())
        print(self.btn.autoRepeatInterval())

    def status_mode(self):
        push_button = QPushButton(self)
        push_button.setText("QPushButton")
        push_button.move(100,100)

        radio_button = QRadioButton(self)
        radio_button.setText('radio')
        radio_button.move(100,200)

        checkbox = QCheckBox(self)
        checkbox.setText("checkbox")
        checkbox.move(100,300)

        push_button.setStyleSheet("QPushButton:pressed {background-color:red;}")

        # push_button.setDown(True)
        # radio_button.setDown(True)
        # checkbox.setDown(True)

        push_button.setCheckable(True)
        print(push_button.isCheckable())
        print(radio_button.isCheckable())
        print(checkbox.isCheckable())

        push_button.setChecked(True)
        radio_button.setChecked(True)
        checkbox.setChecked(True)

        print(push_button.isChecked())
        print(radio_button.isChecked())
        print(checkbox.isChecked())

        # self.btn.pressed.connect(push_button.toggle)
        # self.btn.pressed.connect(radio_button.toggle)
        # self.btn.pressed.connect(checkbox.toggle)

        self.btn.pressed.connect(lambda:push_button.setChecked(not push_button.isChecked()))
        self.btn.pressed.connect(lambda:radio_button.setChecked(not radio_button.isChecked()))
        self.btn.pressed.connect(lambda:checkbox.setChecked(not checkbox.isChecked()))

        push_button.setEnabled(False)
        radio_button.setEnabled(False)
        checkbox.setEnabled(False)

    def exclusive_mode(self):
        for i in range(0,3):
            # btn = QPushButton(self)
            btn = QRadioButton(self)
            btn.setText("btn"+str(i))
            btn.move(350,100*i)

            # btn.setAutoExclusive(True)
            btn.setAutoExclusive(False)

            print(btn.autoExclusive(),btn.isCheckable())
            btn.setCheckable(True)
        btn = QRadioButton(self)
        btn.setText("btn" + str(4))
        btn.move(350, 100 * 4)
        btn.setCheckable(True)

    def click_mode(self):
        btn = QPushButton(self)
        btn.setText("btn")
        btn.move(100, 400)
        btn.pressed.connect(lambda: print("click"))

        # btn.click()
        btn2 = QPushButton(self)
        btn2.setText("btn2")
        btn2.move(300, 300)
        # btn2.pressed.connect(lambda: btn.click())
        btn2.pressed.connect(lambda: btn.animateClick(2000))

    def setup_ui(self):
        self.btn = QPushButton(self)
        self.btn.setText("1")

        # 文本操作
        self.btn.pressed.connect(self.plus_one)

        # 图标操作
        self.ico_mode()

        # 快捷键
        # self.shortcut_mode()

        # 自动重复
        self.report_mode()

        # 状态设置
        self.status_mode()

        # 排他性
        self.exclusive_mode()

        # 按钮模拟点击
        self.click_mode()

        # 设置有效区域
        btn = Btn(self)
        btn.setText("click")
        btn.move(175,0)
        btn.resize(80,80)
        btn.setCheckable(True)
        btn.pressed.connect(lambda :print("pressed"))
        btn.released.connect(lambda :print("released"))
        btn.clicked.connect(lambda value:print("clicked",value))
        btn.toggled.connect(lambda value:print("toggled",value))

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())
