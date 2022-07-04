#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 使用粘贴板.py
    time: 2022/7/4 20:03
    software: PyCharm
..................................
"""
import sys,math
from PyQt5.Qt import *

class ClipBoard(QDialog):
    def __init__(self):
        super(ClipBoard,self).__init__()
        self.setup_ui()
        QMetaObject.connectSlotsByName(self)


    def setup_ui(self):
        textCopyButton = QPushButton('复制文本')
        textCopyButton.setObjectName('textCopyButton')
        textPasteButton = QPushButton('粘贴文本')
        textPasteButton.setObjectName('textPasteButton')
        htmlCopyButton = QPushButton('复制HTML')
        htmlCopyButton.setObjectName('htmlCopyButton')
        htmlPasteButton = QPushButton('粘贴HTML')
        htmlPasteButton.setObjectName('htmlPasteButton')
        imageCopyButton = QPushButton('复制图片')
        imageCopyButton.setObjectName('imageCopyButton')
        imagePasteButton = QPushButton('粘贴图片')
        imagePasteButton.setObjectName('imagePasteButton')


        self.textLabel = QLabel('默认文本')
        self.imageLabel = QLabel()

        # self.imageLabel.setPixmap(QPixmap('rose.png'))

        layout = QGridLayout(self)
        layout.addWidget(textCopyButton,0,0)
        layout.addWidget(imageCopyButton,0,1)
        layout.addWidget(htmlCopyButton,0,2)

        layout.addWidget(textPasteButton,1,0)
        layout.addWidget(imagePasteButton,1,1)
        layout.addWidget(htmlPasteButton,1,2)

        layout.addWidget(self.textLabel,2,0,1,2)
        layout.addWidget(self.imageLabel,2,2)

    @pyqtSlot()
    def on_textCopyButton_clicked(self):
        clipboard = QApplication.clipboard()
        clipboard.setText('hello world')

    def on_textPasteButton_clicked(self):
        clipboard = QApplication.clipboard()
        self.textLabel.setText(clipboard.text())

    def on_imageCopyButton_clicked(self):
        clipboard = QApplication.clipboard()
        clipboard.setPixmap(QPixmap('rose.png'))

    def on_imagePasteButton_clicked(self):
        clipboard = QApplication.clipboard()
        print(clipboard.pixmap())
        self.imageLabel.setPixmap(clipboard.pixmap())

    def on_htmlCopyButton_clicked(self):
        miemDate = QMimeData()
        miemDate.setHtml('<b>Bold and <font color=red>Red</font><b>')
        clipboard = QApplication.clipboard()
        clipboard.setMimeData(miemDate)

    def on_htmlPasteButton_clicked(self):
        clipboard = QApplication.clipboard()
        mimeDate = clipboard.mimeData()
        if mimeDate.hasHtml():
            self.textLabel.setText(mimeDate.html())


if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = ClipBoard()
    window.show()
    sys.exit(app.exec_())



