#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 72-QMessageBox-功能作用.py
    time: 2022/7/1 16:21
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

        '''
        mb = QMessageBox(self)
        # mb.setModal(False)
        # mb.setWindowModality(Qt.NonModal)
        # mb.exec()

        mb.show()
        '''



        '''
        # mb = QMessageBox(QMessageBox.Warning,'xx1','<h2>xx2</h2>',QMessageBox.Ok|QMessageBox.Discard,self)
        mb = QMessageBox(self)
        mb.setWindowTitle('消息提醒')
        # mb.setIcon(QMessageBox.Information)
        mb.setIconPixmap(QPixmap('xxx.png').scaled(50,50))
        mb.setTextFormat(Qt.PlainText)
        mb.setText('<h3>内容被更改</h3>')
        mb.setInformativeText('<h4>是否直接关闭</h4>')
        mb.setCheckBox(QCheckBox('下次不提醒',mb))
        mb.setDetailedText('<h5>aaaaaaaaaaaaaaaaaaaaaaaaaaaa</h5>')

        # mb.setStandardButtons(QMessageBox.Yes|QMessageBox.No)

        # TODO 通过这个改按钮上的字
        mb.addButton(QPushButton('确定',mb),QMessageBox.YesRole)
        # mb.addButton(QPushButton('取消',mb),QMessageBox.NoRole)
        btn = mb.addButton('取消',QMessageBox.NoRole)

        # mb.removeButton(btn) # 移除按钮
        # mb.setDefaultButton(btn)

        mb.setTextInteractionFlags(Qt.TextEditorInteraction)

        def test(btn2):
            print(btn2)
            role = mb.buttonRole(btn2)
            if role == QMessageBox.YesRole:
                print('yes')
            elif role == QMessageBox.NoRole:
                print('no')


        mb.setEscapeButton(btn)
        mb.buttonClicked.connect(test)

        mb.show()
        '''

        # QMessageBox.about(self,'xx1','xx2')
        # QMessageBox.aboutQt(self,'xx1')
        result = QMessageBox.question(self,'xx1','xx2',QMessageBox.Ok|QMessageBox.Discard)
        print(result)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())