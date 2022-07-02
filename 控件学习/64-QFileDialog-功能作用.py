#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 64-QFileDialog-功能作用.py
    time: 2022/6/30 16:23
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QFileDialog')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        # result = QFileDialog.getOpenFileName(
        #     self,
        #     '选择应该py文件',
        #     './',
        #     "All(*.*);;Images(*.png *.jpg);;Python(*.py)",
        #     'Python(*.py)',
        # )
        # result = QFileDialog.getOpenFileNames(
        #     self,
        #     '选择应该py文件',
        #     './',
        #     "All(*.*);;Images(*.png *.jpg);;Python(*.py)",
        #     'Python(*.py)',
        # )
        # result = QFileDialog.getOpenFileUrl(
        #     self,
        #     '选择应该py文件',
        #     QUrl('./'),
        #     "All(*.*);;Images(*.png *.jpg);;Python(*.py)",
        #     'Python(*.py)',
        # )
        # result = QFileDialog.getSaveFileName(
        #     self,
        #     '选择应该py文件',
        #     './',
        #     "All(*.*);;Images(*.png *.jpg);;Python(*.py)",
        #     'Python(*.py)',
        # )
        # result = QFileDialog.getExistingDirectory(
        #     self,
        #     '选择应该py文件夹',
        #     './',
        # )
        # result = QFileDialog.getExistingDirectoryUrl(
        #     self,
        #     '选择应该py文件夹',
        #     QUrl('./'),
        # )
        # print(result)

        def test():
            fd = QFileDialog(
                self,
                '选择应该py文件',
                './',
                "All(*.*);;Images(*.png *.jpg);;Python(*.py)",
            )
            fd.fileSelected.connect(lambda file:print(file))

            # fd.setAcceptMode(QFileDialog.AcceptSave)
            # fd.setDefaultSuffix('txt')

            # fd.setFileMode(QFileDialog.Directory)
            # fd.setNameFilter('IMG(*.jpg *.png *.jpeg)')
            # fd.setNameFilters(['All(*.*)','Images(*.png *.jpg)','Python(*.py)'])

            # fd.setViewMode(QFileDialog.Detail)
            fd.setLabelText(QFileDialog.FileName,'的文件')
            fd.setLabelText(QFileDialog.Accept,'的接受')
            fd.setLabelText(QFileDialog.Reject,'的接受')

            # fd.currentChanged.connect(lambda path:print('str',path))
            # fd.currentUrlChanged.connect(lambda path:print('Qurl',path))
            # fd.directoryEntered.connect(lambda path:print('str',path))
            # fd.directoryUrlEntered.connect(lambda path:print('Qurl',path))
            # fd.filterSelected.connect(lambda path:print('filter',path))
            fd.setFileMode(QFileDialog.ExistingFiles)
            fd.fileSelected.connect(lambda path:print('a file-str',path))
            fd.filesSelected.connect(lambda path:print('files-str',path))
            fd.urlSelected.connect(lambda path:print('a file-url',path))
            fd.urlsSelected.connect(lambda path:print('files-url',path))


            fd.open()

        btn = QPushButton(self)
        btn.setText('text')
        btn.move(100,100)
        btn.clicked.connect(test)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())


