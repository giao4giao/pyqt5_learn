#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 77-QGridLayout-功能作用.py
    time: 2022/7/2 11:08
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
        gl = QGridLayout()


        self.setLayout(gl)

        label1= QLabel('标签1')
        label1.setStyleSheet('background-color:cyan;')
        label2= QLabel('标签2')
        label2.setStyleSheet('background-color:yellow;')
        label3= QLabel('标签3')
        label3.setStyleSheet('background-color:red;')

        label5= QLabel('标签5')
        label5.setStyleSheet('background-color:pink;')
        label6= QLabel('标签6')
        label6.setStyleSheet('background-color:blue;')
        label7= QLabel('标签7')
        label7.setStyleSheet('background-color:cyan;')


        v_layout = QVBoxLayout()
        v_layout.addWidget(label5)
        v_layout.addWidget(label6)
        v_layout.addWidget(label7)


        gl.addWidget(label1,0,0)
        gl.addWidget(label2,0,1)
        gl.addWidget(label3,1,0,3,3)

        gl.addLayout(v_layout,4,0,1,4)

        print(gl.getItemPosition(1))

        # 最小尺寸
        # gl.setColumnMinimumWidth(0,100)
        # gl.setRowMinimumHeight(0,100)

        # 横着的拉伸系数
        gl.setColumnStretch(0,2)
        gl.setColumnStretch(1,1)

        gl.setRowStretch(4,1) # 竖着的

        # 边距
        # print(gl.spacing(),gl.horizontalSpacing(),gl.verticalSpacing())

        # # gl.setVerticalSpacing(60)   # 行与行
        # # gl.setHorizontalSpacing(60) # 列与列
        # gl.setSpacing(60)             # 与上面相同

        gl.setOriginCorner(Qt.BottomRightCorner)

        print(gl.rowCount(),gl.columnCount(),gl.cellRect(0,1))

        # print(gl.cellRect(0, 1),gl.itemAtPosition(0,1).widget().text())


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()

    print(window.layout().cellRect(0, 1))

    sys.exit(app.exec_())