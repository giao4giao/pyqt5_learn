#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 63-QColorDialog-功能作用.py
    time: 2022/6/30 15:52
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
        btn = QPushButton(self)
        btn.move(100,100)
        btn.setText('test')
        def test():
            cd = QColorDialog(self)
            cd.setOption(QColorDialog.NoButtons)
            cd.setWindowTitle('选择')
            def sel_color(color):
                palette = QPalette()
                palette.setColor(QPalette.ButtonText,color)
                btn.setPalette(palette)

            # cd.colorSelected.connect(sel_color)
            cd.currentColorChanged.connect(sel_color)

            cd.show()



        # color = QColorDialog.getColor(QColor(10,20,100),self,'选择颜色')
        # print(color)
        # palette = QPalette()
        # palette.setColor(QPalette.Background,color)
        # self.setPalette(palette)

        btn.clicked.connect(test)


    def setup_ui_old(self):
        cd = QColorDialog(QColor(100,200,5),self)
        cd.setWindowTitle('1234')
        def color_(color=None):
            palette = QPalette()
            # palette.setColor(QPalette.Background,color if color else cd.selectedColor())
            palette.setColor(QPalette.Background,color if color else cd.currentColor())
            self.setPalette(palette)

        # cd.colorSelected.connect(color_)

        cd.currentColorChanged.connect(color_)
        cd.setOptions(QColorDialog.NoButtons |QColorDialog.ShowAlphaChannel)
        cd.show()
        # cd.open(color_)
        # if cd.exec():
        #     color_()

        btn = QPushButton(self)
        btn.move(100,100)
        btn.setText('test')
        # btn.clicked.connect(lambda:print(cd.customCount()))
        btn.clicked.connect(lambda:cd.setCustomColor(0,QColor(100,200,500)))


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())