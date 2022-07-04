#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 85-QTreeWidget-基本用法.py
    time: 2022/7/4 20:42
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

    @staticmethod
    def set_layout(widget,self):
        layout = QBoxLayout(QBoxLayout.LeftToRight,self)
        layout.setContentsMargins(0,0,0,0)
        layout.addWidget(widget)

    def setup_ui(self):
        tree = QTreeWidget()
        self.set_layout(tree,self)

        tree.setColumnCount(2)

        tree.setHeaderLabels(['key','value'])

        root = QTreeWidgetItem(tree)
        root.setText(0,'根节点')
        root.setIcon(0,QIcon('rose.png'))
        tree.setColumnWidth(0,120)

        child1 = QTreeWidgetItem(root)
        child1.setText(0,'字节点1')
        child1.setText(1,'数据')
        child1.setIcon(0,QIcon('rose.png'))
        child1.setCheckState(0,Qt.Checked)

        child2 = QTreeWidgetItem(root,['字节点2','数据'])
        child2.setIcon(0,QIcon('rose.png'))

        child3 = QTreeWidgetItem(child2,['字节点21','数据'])




if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())