#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 42-QPlainTextEdit-功能测试.py
    time: 2022/6/20 18:06
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QPlainTextEdit功能测试')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        pte = QPlainTextEdit(self)
        self.pte = pte
        pte.resize(300,300)
        pte.move(100,100)


        test_btn = QPushButton(self)
        test_btn.move(20, 20)
        test_btn.setText("测试按钮")
        test_btn.clicked.connect(self.btn_test)

        line_num_parent = QWidget(self)
        line_num_parent.resize(30,300)
        line_num_parent.move(70,100)
        line_num_parent.setStyleSheet("background-color:cyan;")

        self.line_label = QLabel(line_num_parent)
        self.line_label.move(0,6)
        line_nums = '\n'.join(str(i) for i in range(1,101))
        self.line_label.setText(line_nums)
        self.line_label.adjustSize()

        # 占位提示文本
        # self.text_set()

        # 只读设置
        # self.read_only()

        # 格式设置
        # self.set_sty()

        # 自动换行
        # self.auto_()

        # 覆盖模式
        # self.over_write()

        # Tab控制
        # self.tab_set()

        # 文本操作
        # self.text_try()

        self.connect_()

    def btn_test(self):
        # 块的操作
        # self.block_run()

        # 放大缩小
        # self.zoom_try()

        # 滚动保证光标可见
        # self.scroll_()

        self.cursor_()

    # 光标操作
    def cursor_(self):
        # QTextCursor
        # tc = self.pte.textCursor()
        # tc.insertImage("rose.png")
        # tc.insertTable(5, 6)
        tc = self.pte.cursorForPosition(QPoint(20, 60))
        print(tc)
        tc.insertText("itlike")
        # self.pte.setCursorWidth(20)

        # self.pte.moveCursor(QTextCursor.End, QTextCursor.KeepAnchor)
        self.pte.setFocus()

    # 信号的操作
    def connect_(self):
        # self.pte.textChanged.connect(lambda :print("内容发生了改变"))
        # self.pte.cursorPositionChanged.connect(lambda :print("光标位置改变"))
        # self.pte.blockCountChanged.connect(lambda bc:print("块的个数改变", bc))
        # self.pte.selectionChanged.connect(lambda :print("选中内容发生了改变", self.pte.textCursor().selectedText()))
        # self.pte.modificationChanged.connect(lambda val:print("修改状态发生改变", val))
        # doc = self.pte.document()
        # doc.setModified(False)

        # self.pte.updateRequest.connect(lambda rect, dy: print(rect,dy))
        self.pte.updateRequest.connect(lambda rect, dy: self.line_label.move(self.line_label.x(), self.line_label.y() + dy))
        pass

    # 滚动保证光标可见
    def scroll_(self):
        # self.pte.centerCursor()
        self.pte.ensureCursorVisible()
        self.pte.setFocus()



    # 放大缩小
    def zoom_try(self):
        # self.pte.zoomIn(10)
        # self.pte.zoomIn(-1)
        self.pte.zoomOut(-10)


    # 块的操作
    def block_run(self):
        print(self.pte.blockCount())
        self.pte.setMaximumBlockCount(3)
        print(self.pte.toPlainText())


    def text_try(self):
        self.pte.setPlainText("b")
        self.pte.setPlainText("aaaaaaaaa")
        self.pte.insertPlainText("BBBBBBB")
        # self.pte.appendPlainText("<a href='http://www.itlike.com'>撩课</a>")
        self.pte.appendHtml("<a href='http://www.itlike.com'>撩课</a>")


        table_str = "<table border=2>" \
                    "<tr><td>1</td><td>2</td><td>3</td></tr>" \
                    "<tr><td>4</td><td>5</td><td>6</td></tr>" \
                    "</table>"
        self.pte.appendHtml(table_str)
        print(self.pte.toPlainText())


    def tab_set(self):
        self.pte.setTabChangesFocus(False)
        self.pte.setTabStopDistance(100)

    def over_write(self):
        print(self.pte.overwriteMode())
        self.pte.setOverwriteMode(True)
        print(self.pte.overwriteMode())


    def auto_(self):
        print(self.pte.lineWrapMode())
        self.pte.setLineWrapMode(QPlainTextEdit.NoWrap)


    def set_sty(self):
        tcf = QTextCharFormat()
        tcf.setFontUnderline(True)
        tcf.setUnderlineColor(QColor(200,100,100))
        self.pte.setCurrentCharFormat(tcf)

    # 只读设置
    def read_only(self):
        self.pte.setReadOnly(True)

    # 占位提示文本
    def text_set(self):
        self.pte.setPlaceholderText("请输入")


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())