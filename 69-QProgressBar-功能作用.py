#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 69-QProgressBar-功能作用.py
    time: 2022/7/1 15:34
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QProgressBar')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        pb = QProgressBar(self)

        # print(pb.minimum(),pb.maximum())
        # pb.setMinimum(12)

        # pb.setRange(0,1000)
        #
        pb.setValue(75)

        # pb.setRange(0,0)

        btn = QPushButton(self)
        btn.setText('btn')
        btn.move(200,200)
        # btn.clicked.connect(pb.reset)
        # TODO 进度条有关，有点用
        # btn.clicked.connect(lambda :pb.setAlignment(Qt.AlignCenter))
        # btn.clicked.connect(lambda :print(pb.minimum(),pb.maximum()))
        btn.clicked.connect(lambda :pb.setOrientation(Qt.Vertical))
        btn.clicked.connect(lambda :pb.resize(100,400))
        btn.clicked.connect(lambda :print(pb.isTextVisible()))
        btn.clicked.connect(lambda :pb.setTextDirection(pb.TopToBottom))
        btn.clicked.connect(lambda :pb.setInvertedAppearance(True))


        pb.resize(400,100)
        # pb.setFormat('%p%')
        # pb.setFormat('%v/%m')
        pb.setFormat(f'{pb.value()}')

        # pb.setTextVisible(False)

        timer = QTimer(pb)
        def change_progress():
            print('timer')
            if pb.value()==pb.maximum():
                timer.stop()
            pb.setValue(pb.value()+1)
        timer.timeout.connect(change_progress)
        timer.start(100)

        pb.valueChanged.connect(lambda val:print(val))


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())