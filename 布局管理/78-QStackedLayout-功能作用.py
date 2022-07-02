#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 78-QStackedLayout-功能作用.py
    time: 2022/7/2 11:37
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
        """堆叠的样式表"""
        sl = QStackedLayout()

        self.setLayout(sl)  # 这个要放在上面(这里)

        label1= QLabel('标签1')
        label1.setStyleSheet('background-color:cyan;')
        label2= QLabel('标签2')
        label2.setStyleSheet('background-color:yellow;')
        label3= QLabel('标签3')
        label3.setStyleSheet('background-color:red;')

        label4= QLabel('标签4')
        label4.setStyleSheet('background-color:orange;')

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

        print(sl.addWidget(label1))
        print(sl.addWidget(label2))
        print(sl.addWidget(label3))

        print(sl.currentIndex())
        print(sl.insertWidget(0, label4))
        print(sl.currentIndex())

        print(sl.widget(2).text())

        '''
        # sl.setCurrentIndex(2) # 选择哪一个

        timer = QTimer(self)
        timer.timeout.connect(lambda:sl.setCurrentIndex((sl.currentIndex()+1)%sl.count()))
        timer.start(1000)

        # sl.setCurrentWidget(label4)

        sl.currentChanged.connect(lambda val:print(val))
        '''

        """
        sl.setStackingMode(QStackedLayout.StackAll) # 显示堆叠的对象的显示
        label1.setFixedSize(100,100)
        label2.setFixedSize(200,200)

        # label1.hide()
        # print(label2.isVisible())
        # label2.show()
        """

        sl.removeWidget(label1)



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())