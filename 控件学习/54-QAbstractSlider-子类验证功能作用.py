#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 54-QAbstractSlider-子类验证功能作用.py
    time: 2022/6/29 17:29
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QAbstractSlider子类验证功能作用')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        label = QLabel(self)
        label.setText('0')
        label.move(200,200)
        # label.adjustSize() #TODO 动态改变label大小
        # label.resize(100,50)

        # aser = QAbstractSlider(self)
        sd = QSlider(self)
        sd.move(300,300)
        sd.valueChanged.connect(lambda val:label.setText(str(val)))
        sd.valueChanged.connect(label.adjustSize)

        sd.setMinimum(10)
        sd.setMaximum(100)

        sd.setValue(88)

        # sd.setSingleStep(4)
        # sd.setPageStep(8)

        # print(sd.hasTracking())
        # sd.setTracking(False)

        # 滑块位置
        sd.setSliderPosition(88)

        # 倒立外观
        # sd.setInvertedAppearance(True)
        # sd.setInvertedControls(True)
        sd.setOrientation(Qt.Horizontal)


        # sd.sliderMoved.connect(lambda val:print(val))
        # sd.actionTriggered.connect(lambda val:print(val))
        sd.rangeChanged.connect(lambda min,max:print(min,max))



if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())