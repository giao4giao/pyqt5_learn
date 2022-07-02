#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 51-QComboxBox-功能测试.py
    time: 2022/6/29 16:07
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


    def setup_ui_old(self):
        cb = QComboBox(self)
        # # cb.addItem('xx1')
        # # cb.addItem('xx2')
        # # cb.addItem(QIcon('xxx.png'),'xx2')
        # cb.addItems(('x','y','z'))
        #
        # # cb.insertItem(1,"xxx")
        # # cb.insertItem(1,QIcon('xxx.png'),"xxx")
        # # cb.insertItems(1,('a','b'))
        #
        # cb.setItemIcon(2,QIcon('xxx.png'))
        # cb.setItemText(2,'1111')
        #
        # # cb.removeItem(1)
        #
        # cb.insertSeparator(2)
        #
        # cb.setCurrentIndex(1)
        # cb.setCurrentText('xz')
        #
        # cb.setEditable(True)
        # cb.setEditText('zzz')

        # TODO 给前面的条码软件提供了新的界面
        cb.resize(400,100)
        # print(QAbstractItemModel.__subclasses__())
        model = QStandardItemModel()
        item1 = QStandardItem('item1')
        item2 = QStandardItem('item2')
        item22 = QStandardItem('item22')
        item2.appendRow(item22)
        model.appendRow(item1)
        model.appendRow(item2)
        cb.setModel(model)

        cb.setView(QTreeView(cb))

    def setup_ui(self):
        cb = QComboBox(self)
        cb.addItems(['abc','123','456'])
        # TODO 这里也可以改善前面的条形码代码
        cb.addItem(QIcon('xxx.png'),'aaa',{'name':'aaa'})
        self.cb = cb

        test_btn = QPushButton(self)
        self.btn = test_btn
        test_btn.move(200,200)
        test_btn.setText("test")
        test_btn.clicked.connect(self.btn_test)

        # cb.setMaxCount(6)
        # cb.setMaxVisibleItems(3)
        cb.setEditable(True)

        # cb.setDuplicatesEnabled(True) # 可重复
        # cb.setFrame(False)
        # cb.setIconSize(QSize(60,60))

        cb.setSizeAdjustPolicy(QComboBox.AdjustToContents) # 长度变化

        # cb.showPopup() # 弹出
        cer = QCompleter(('123','456','789'))
        cb.setCompleter(cer)

        # cb.activated.connect(lambda val:print('条目被激活',val))
        # cb.activated[str].connect(lambda val:print('条目被激活',val))
        # cb.currentIndexChanged.connect(lambda val:print('索引改变',val))
        # cb.currentTextChanged.connect(lambda val:print('文本改变',val))
        # cb.editTextChanged.connect(lambda val:print('编辑文本改变',val))
        # cb.highlighted.connect(lambda val:print('高亮改变',val))
        cb.highlighted[str].connect(lambda val:print('高亮改变',val))


    def btn_test(self):
        cb = self.cb
        # cb.clear()
        # cb.clearEditText()

        cb.setCurrentIndex(3)



    def btn_test_old(self,_,idx=0):
        cb = self.cb
        btn = self.btn

        # print(cb.count())

        # print(cb.currentIndex())
        # print(cb.currentText())
        # print(cb.currentData())
        # print(cb.itemIcon(cb.currentIndex()))
        #
        # btn.setIcon(cb.itemIcon(cb.currentIndex()))

        print(cb.itemIcon(idx),cb.itemText(idx),cb.itemData(idx))

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())