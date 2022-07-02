#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 62-QFontDialog-功能作用.py
    time: 2022/6/30 13:49
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
        font = QFont()
        font.setFamily('宋体')
        font.setPointSize(36)
        # fd = QFontDialog(font,self)
        # fd.setOption(QFontDialog.NoButtons,on=True)
        # self.fd = fd

        btn = QPushButton(self)
        btn.setText('按钮')
        btn.move(100,100)

        # fd.show()

        label = QLabel(self)
        label.move(300,300)
        label.setText('aa')

        # fd.currentFontChanged.connect(lambda font:label.setFont(font))
        # fd.currentFontChanged.connect(label.adjustSize)
        def font_sel():
            # result = QFontDialog.getFont(self)
            result = QFontDialog.getFont(font,self,'选择字体')
            if result[-1]:
                label.setFont(result[0])
                label.adjustSize()

        btn.clicked.connect(font_sel)



    def setup_ui_old(self):
        # fd = QFontDialog(self)

        font = QFont()
        font.setFamily('宋体')
        font.setPointSize(36)
        fd = QFontDialog(font,self)
        self.fd = fd

        btn = QPushButton(self)
        btn.setText('按钮')
        btn.move(100,100)
        btn.clicked.connect(lambda:fd.open(self.font_sel))

        # if fd.exec():
        #     print(fd.selectedFont().family())

    def font_sel(self):
        print('字体被选择了',self.fd.selectedFont())
        print(self.fd.selectedFont().family())




if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())










