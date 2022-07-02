#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 35-QLineEdit-登录案例.py
    time: 2022/6/16 21:55
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class AccountTool:
    ACCOUNT_ERROR = 1
    PWD_ERROR = 2
    SUCCESS = 3
    @staticmethod
    def check_login(account,pwd):
        if account != "aa":
            return AccountTool.ACCOUNT_ERROR








class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)

        self.widget_w = 300
        self.widget_h = 40
        self.margin = 60

        self.setup_ui()


    def resizeEvent(self, event):
        self.account_le.resize(self.widget_w,self.widget_h)
        self.pwd_le.resize(self.widget_w,self.widget_h)
        self.pwd_le.setEchoMode(self.pwd_le.Password)
        self.login_btn.resize(self.widget_w,self.widget_h)
        self.login_btn.setText("登  录")

        x = int((self.width()- self.widget_w)/2)
        self.account_le.move(x,int(self.height()/5))
        self.pwd_le.move(x,int(self.account_le.y()+self.widget_h+self.margin))
        self.login_btn.move(x,int(self.pwd_le.y()+self.widget_h+self.margin))

        self.account_le.setPlaceholderText("请输入账号")
        self.pwd_le.setPlaceholderText("请输入密码")

        self.pwd_le.setClearButtonEnabled(True)

        self.action = QAction(self.pwd_le)
        self.action.setIcon(QIcon("close.png"))
        self.action.triggered.connect(self.ico_move)
        self.pwd_le.addAction(self.action,QLineEdit.TrailingPosition)

        completer = QCompleter(["aa","bb","sf"],self.account_le)
        self.account_le.setCompleter(completer)


    def ico_move(self):
        if self.pwd_le.echoMode()==QLineEdit.Normal:
            self.pwd_le.setEchoMode(QLineEdit.Password)
            self.action.setIcon(QIcon("close.png"))
        else:
            self.pwd_le.setEchoMode(QLineEdit.Normal)
            self.action.setIcon(QIcon("open.png"))

    def setup_ui(self):
        self.account_le = QLineEdit(self)
        self.pwd_le = QLineEdit(self)
        self.login_btn = QPushButton(self)

        self.login_btn.clicked.connect(self.login)

    def login(self):
        account = self.account_le.text()
        pwd = self.pwd_le.text()
        state = AccountTool.check_login(account,pwd)

        if state == AccountTool.ACCOUNT_ERROR:
            if pwd ==AccountTool.SUCCESS:
                print('suc')
            else:
                print('failed')
                self.pwd_le.setText("")
                self.pwd_le.setFocus()
        else:
            self.account_le.setText("")
            self.pwd_le.setText("")
            self.account_le.setFocus()



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())