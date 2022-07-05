#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 1024.py
    time: 2022/7/4 22:11
    software: PyCharm
..................................
"""
import sys
from random import randint
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QIcon
from PyQt5.QtWidgets import (QApplication, QDesktopWidget, QGridLayout,
                             QHBoxLayout, QLabel, QMessageBox, QPushButton,
                             QVBoxLayout, QWidget, QInputDialog)
# from option import option



from random import choice, randint


class option():
    def __init__(self, input_field: list):
        self.field_number = input_field
        self.score = 0

    def tight(self, list_int: list) -> list:
        return sorted(list_int, key=lambda x: 1 if x == 0 else 0)

    # 将每一行进行平移
    def merge(self, list_int: list) -> list:
        tight_list_int = self.tight(list_int)
        for i in range(len(tight_list_int)-1):
            if list_int[i] == list_int[i+1]:
                list_int[i] = 0
                list_int[i+1] = list_int[i+1]*2
                self.score += list_int[i+1]
        return self.tight(list_int)

    def transpose(self, args):
        return [list(row) for row in zip(*args)]

    def invert(self, args):
        return [row[::-1] for row in args]

    def move_left(self):
        self.field_number = [self.merge(row) for row in self.field_number]

    def move_right(self):
        self.field_number = self.invert(
            [self.merge(row) for row in self.invert(self.field_number)])

    def move_up(self):
        self.field_number = self.transpose(
            [self.merge(row) for row in self.transpose(self.field_number)])

    def move_down(self):
        self.field_number = self.transpose(
            self.invert([self.merge(row) for row in self.transpose(self.field_number)]))

    def random_create(self):
        x = randint(0, 3)
        y = randint(0, 3)
        if self.field_number[x][y] == 0:
            self.field_number[x][y] = choice([2, 2, 2, 4])

    def get_MaxScore(self):
        max_score = 0
        for numbers in self.field_number:
            for number in numbers:
                if number > max_score:
                    max_score = number
        return max_score

class game(QWidget):
    def __init__(self):
        # 初始化父类
        super().__init__()
        # 初始化4*4列表
        self.numbers = [
            [0 for i in range(4)] for j in range(4)
        ]
        # 初始化操作对象
        self.myoption = option(self.numbers)
        # 初始化分数
        self.score = 0
        # 设置获胜标准是数组中出现2048
        self.win_score = 2048
        # 最高分玩家名字
        self.name_score = 'xx:xx'
        # 按钮
        self.buttons = []
        self.initGUI()

    # 初始化窗口
    def initGUI(self):
        # resize()方法调整窗口的大小。
        self.resize(100, 100)
        # 让窗口出现在屏幕中央
        self.center()
        # 设置窗口的标题
        self.setWindowTitle('2048game')
        # 设置窗口的图标，引用当前目录下的web.png图片
        self.setWindowIcon(QIcon('2048.png'))
        self.setGridLay()
        # 显示在屏幕上
        self.show()

    # 设置布局
    def setGridLay(self):
        # 创建水平布局对象
        hbox = QHBoxLayout()
        # 创建表格布局对象
        grid = QGridLayout()
        self.myoption.random_create()
        self.showNumber(grid)
        # 创建分数标签
        fraction = QLabel('分数：')
        fraction.setStyleSheet("QLabel{font-size:20px;}")

        number = QLabel('0')
        number.setStyleSheet("QLabel{font-size:20px;}")
        self.score = number

        # 创建最高分玩家标签
        high_score = QLabel('最高分：')
        high_score.setStyleSheet("QLabel{font-size:20px;}")
        name_score = QLabel('xx:xx')
        name_score.setStyleSheet("QLabel{font-size:18px;}")
        self.name_score = name_score

        hbox.addWidget(fraction)
        hbox.addWidget(number)
        hbox.addWidget(high_score)
        hbox.addWidget(name_score)
        hbox.addStretch(1)

        vbox = QVBoxLayout()
        vbox.addLayout(hbox)
        vbox.addLayout(grid)

        hbox_foot = QHBoxLayout()
        reset_Button = QPushButton("重新开始")
        reset_Button.setStyleSheet('QPushButton{background-color:rgb(170,200,50);\
                font-size:25px;}')
        reset_Button.clicked.connect(self.clickButton)
        hbox_foot.addWidget(reset_Button)
        vbox.addLayout(hbox_foot)

        self.setLayout(vbox)

    def showNumber(self, grid):
        grid.setSpacing(0)
        for i in range(len(self.numbers)):
            for j in range(len(self.numbers[i])):
                button = QPushButton(str(self.numbers[i][j]))
                button.setFixedSize(50, 50)
                r = randint(0, 255)
                g = randint(0, 255)
                b = randint(0, 255)
                content = f'background-color:rgb({r},{g},{b});font-size:30px;font-weight:bold'
                button.setStyleSheet(f'QPushButton{{{content}}}')
                grid.addWidget(button, i, j)
                self.buttons.append(button)

    # 重新开始按钮
    def clickButton(self):
        self.score.setText('0')
        for i in range(4):
            for j in range(4):
                self.numbers[i][j] = 0
        self.myoption.score = 0
        self.myoption.random_create()
        for button, number in zip(self.buttons,  self.enumlist(self.numbers)):
            button.setText(f'{number}')

    # 监听按键事件
    def keyPressEvent(self, e):
        if e.key() == Qt.Key_W:
            self.myoption.move_up()
            self.flush()
        elif e.key() == Qt.Key_S:
            self.myoption.move_down()
            self.flush()
        elif e.key() == Qt.Key_A:
            self.myoption.move_left()
            self.flush()
        elif e.key() == Qt.Key_D:
            self.myoption.move_right()
            self.flush()
        if self.is_win():
            self.showDialog()

    # 刷新界面
    def flush(self):
        self.myoption.random_create()
        self.numbers = self.myoption.field_number
        for button, number in zip(self.buttons,  self.enumlist(self.numbers)):
            button.setText(f'{number}')
        n = self.myoption.score
        self.score.setText(f'{n}')

    # 判断是否获胜
    def is_win(self):
        max_score = self.myoption.get_MaxScore()
        if max_score >= self.win_score:
            return True
        else:
            return False

    # 游戏获胜后弹出界面
    def showDialog(self):
        text, ok = QInputDialog.getText(
            self, '恭喜你赢了！', '请输入姓名(不可为空):')
        if ok:
            if text:
                n = self.myoption.score
                self.name_score.setText(f'{text}:{n}')
                self.clickButton()
            else:
                self.showDialog()

    # 转换二维列表维一维
    def enumlist(self, nestedlist):
        for sublist in nestedlist:
            for element in sublist:
                yield element

    # 获取电脑屏幕的大小，是窗口在中间出现
    def center(self):
        # 创建屏幕对象
        screen = QDesktopWidget().screenGeometry()
        # 获取游戏窗口对象
        size = self.geometry()
        # 移动游戏窗口
        self.move(
            (screen.width() - size.width()) // 2,
            (screen.height() - size.height()) // 2
        )

    # 添加一个关闭按钮时间
    def closeEvent(self, event):
        reply = QMessageBox.question(self, 'Message',
                                     "Are you sure to quit?", QMessageBox.Yes |
                                     QMessageBox.No, QMessageBox.No)
        if reply == QMessageBox.Yes:
            event.accept()
        else:
            event.ignore()


if __name__ == '__main__':
    # 每一pyqt5应用程序必须创建一个应用程序对象。sys.argv参数是一个列表，从命令行输入参数。
    app = QApplication(sys.argv)
    g = game()
    # 系统exit()方法确保应用程序干净的退出
    # app的exec_()方法有下划线。因为执行是一个Python关键词。因此，exec_()代替
    sys.exit(app.exec_())