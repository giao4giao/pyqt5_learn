#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 88-pyinstaller打包相关的.py
    time: 2022/7/4 23:04
    software: PyCharm
..................................
"""

"""
# https://www.pythonguis.com/tutorials/packaging-pyqt6-applications-windows-pyinstaller/
为了让图标显示在任务栏上，我们需要做的最后一个调整是在 Python 文件的顶部添加一些神秘的咒语。

当您运行应用程序时，Windows 会查看可执行文件并尝试猜测它属于哪个“应用程序组”。默认情况下，
任何 Python 脚本（包括您的应用程序）都归入同一“Python”组，因此将显示 Python 图标。
为了阻止这种情况发生，我们需要为 Windows 提供不同的应用程序标识符。

ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID()下面的代码通过使用自定义应用程序 ID调用来执行此操作。
"""

from PyQt5 import QtWidgets, QtGui
import sys, os

basedir = os.path.dirname(__file__)

try:
    from ctypes import windll  # Only exists on Windows.
    myappid = 'mycompany.myproduct.subproduct.version'
    windll.shell32.SetCurrentProcessExplicitAppUserModelID(myappid)
except ImportError:
    pass


class MainWindow(QtWidgets.QMainWindow):

    def __init__(self):
        super().__init__()

        self.setWindowTitle("Hello World")
        l = QtWidgets.QLabel("My simple app.")
        l.setMargin(10)
        self.setCentralWidget(l)
        self.show()

if __name__ == '__main__':
    app = QtWidgets.QApplication(sys.argv)
    app.setWindowIcon(QtGui.QIcon(os.path.join(basedir, 'rose.png')))
    w = MainWindow()
    app.exec()