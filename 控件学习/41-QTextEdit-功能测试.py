#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 41-QTextEdit-功能测试.py
    time: 2022/6/18 16:39
    software: PyCharm
..................................
"""
from PyQt5.Qt import *

class MyTextEdit(QTextEdit):
    def mousePressEvent(self,evt):
        print(evt.pos())
        url = self.anchorAt(evt.pos())
        if url:
            QDesktopServices.openUrl(QUrl(url))
        return super().mousePressEvent(evt)


class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        self.te = MyTextEdit('xxx',self)
        self.te.move(50,50)
        self.te.resize(300,300)
        self.te.setStyleSheet("background-color:cyan;")

        self.test_btn = QPushButton("btn",self)
        self.test_btn.move(350,100)
        self.test_btn.pressed.connect(self.click)

        self.te.textChanged.connect(lambda :print("textchange"))
        # self.te.selectionChanged.connect(lambda :print("selectionChanged"))
        self.te.copyAvailable.connect(lambda s:print("copyAvailable",s))

        # self.text_show()
        self.text_set()

        # tc = self.te.textCursor()
        # tlf = QTextListFormat()
        # tlf.setIndent(3)
        # tlf.setNumberPrefix("<<")
        # tlf.setNumberSuffix(">>")
        # tlf.setStyle(QTextListFormat.ListDecimal)
        # tl = tc.createList(tlf)

        self.te.textCursor().insertTable(5,3)
        # self.te.insertHtml("xxx"*300+"<a name='lk' href='#itlike'>tenseip</a>"+"aaa"*200)
        self.te.insertHtml("xxx"*300+"<a href='https://www.tenseip.com'>tenseip</a>")



    def click(self):
        # self.te.setText("")
        # self.te.clear()
        # QTextDocument
        # print(self.te.document())
        # QTextCursor
        # print(self.te.textCursor())
        # self.cursor_insert()

        # self.set_format()

        # self.get_staus()

        # self.text_choice()

        # self.get_choice_text()

        # self.other_text()

        # self.del_text()

        # self.pos_about()

        # self.start_end()

        # 自动格式化
        # self.auto_format()

        # 换行模式
        # self.change_mode()

        # 对齐方式
        # self.over_write_mode()

        # 光标设置
        # self.set_cursor()

        # self.alignment()

        # 字体格式
        # self.font_set()

        # 颜色设置
        # self.color_set()

        # 当前的字符格式
        # self.char_set()

        # 常用编辑操作
        # self.offen_use()

        # 滚动到锚点
        # self.to_anc()

        # 只读设置
        # self.read_set()

        # tab控制
        # self.tab_try()

        # 打开超链接
        self.open_url()


    # 打开超链接
    def open_url(self):
        pass

    # tab控制
    def tab_try(self):
        # self.te.setTabChangesFocus(True)
        print(self.te.tabStopDistance())
        print(self.te.tabStopWidth())
        self.te.setTabStopDistance(100)

    # 只读设置
    def read_set(self):
        print(self.te.isReadOnly())
        self.te.setReadOnly(True)
        self.te.insertPlainText("aaa")

    # 滚动到锚点
    def to_anc(self):
        self.te.scrollToAnchor("lk")

    # 常用编辑操作
    def offen_use(self):
        # print(self.te.copy())
        # self.te.paste()
        # self.te.selectAll()
        print(self.te.find(
            "xx",
            QTextDocument.FindBackward|
            QTextDocument.FindCaseSensitively|
            QTextDocument.FindWholeWords
        )
        )
        self.te.setFocus()

    # 当前的字符格式
    def char_set(self):
        tcf = QTextCharFormat()
        tcf.setFontFamily("宋体")
        tcf.setFontPointSize(20)
        tcf.setFontCapitalization(QFont.Capitalize)
        tcf.setForeground(QColor(100,200,150))
        self.te.setCurrentCharFormat(tcf)

        tcf2 = QTextCharFormat()
        tcf2.setFontOverline(True)
        # self.te.setCurrentCharFormat(tcf2)
        self.te.mergeCurrentCharFormat(tcf2)


    # 颜色设置
    def color_set(self):
        self.te.setTextBackgroundColor(QColor(200,10,10))
        self.te.setTextColor(QColor(10,200,10))

    #字体格式
    def font_set(self):
        # print(QFontDialog.getFont())

        # self.te.setFontFamily("幼圆")
        # self.te.setFontWeight(QFont.Black)
        # self.te.setFontItalic(True)
        # self.te.setFontPointSize(30)
        # self.te.setFontUnderline(True)

        font = QFont()
        font.setStrikeOut(True)
        self.te.setCurrentFont(font)

    # 对齐方式
    def alignment(self):
        self.te.setAlignment(Qt.AlignCenter)

    # 光标设置
    def set_cursor(self):
        print(self.te.cursorWidth())
        print(self.te.cursorRect(self.te.textCursor()))
        if self.te.overwriteMode():
            self.te.setOverwriteMode(False)
            self.te.setCursorWidth(1)
        else:
            self.te.setOverwriteMode(True)
            self.te.setCursorWidth(10)


    # 覆盖模式
    def over_write_mode(self):
        self.te.setOverwriteMode(True)
        print(self.te.overwriteMode())

    # 换行模式
    def change_mode(self):
        # self.te.setLineWrapMode(QTextEdit.NoWrap)

        # self.te.setLineWrapMode(QTextEdit.FixedPixelWidth)
        # self.te.setLineWrapColumnOrWidth(100)

        self.te.setLineWrapMode(QTextEdit.FixedColumnWidth)
        self.te.setLineWrapColumnOrWidth(8)

        self.te.setWordWrapMode(QTextOption.WordWrap)

    # 自动格式化
    def auto_format(self):
        self.te.setAutoFormatting(QTextEdit.AutoBulletList)

    # 开始和结束操作
    def start_end(self):
        tc = self.te.textCursor()

        tc.beginEditBlock()
        tc.insertText("123")
        tc.insertBlock()
        tc.insertText("456")
        tc.insertBlock()
        tc.insertText("789")
        tc.insertBlock()
        tc.endEditBlock()

    # 位置相关
    def pos_about(self):
        tc = self.te.textCursor()
        print("是否再段落的结尾:",tc.atBlockEnd())
        print("是否再段落的开始:",tc.atBlockStart())
        print("是否再文档的结尾:",tc.atEnd())
        print("是否再文档的开始:",tc.atStart())

        print("在第几列:",tc.columnNumber())
        print("光标的位置:",tc.position())
        print("在文本块的位置:",tc.positionInBlock())



    # 文本字符的删除
    def del_text(self):
        tc = self.te.textCursor()
        # tc.deleteChar()
        tc.deletePreviousChar()
        self.te.setFocus()

    # 其他的文本操作
    def other_text(self):
        tc = self.te.textCursor()
        # print(tc.selectionStart())
        # print(tc.selectionEnd())
        # tc.clearSelection()
        # self.te.setTextCursor(tc)
        # print(tc.hasSelection())
        tc.clearSelection()
        self.te.setTextCursor(tc)
        self.te.setFocus()

    # 文本选中内容的获取
    def get_choice_text(self):
        tc = self.te.textCursor()
        # print(tc.selectedText())
        # print(tc.selection())
        print(tc.selectedTableCells())

    # 文本选中和清空
    def text_choice(self):
        tc = self.te.textCursor()

        # tc.setPosition(6,QTextCursor.KeepAnchor)
        # tc.movePosition(QTextCursor.StartOfLine,QTextCursor.MoveAnchor,1)
        tc.select(QTextCursor.BlockUnderCursor)

        self.te.setTextCursor(tc)
        self.te.setFocus()


    # 内容和格式的获取
    def get_staus(self):
        tc = self.te.textCursor()
        # print(tc.block())
        # print(tc.block().text())
        # print(tc.blockNumber())
        # print(tc.currentList())
        if tc.currentList():
            print(tc.currentList().count())


    # 格式设置和合并
    def set_format(self):
        tc = self.te.textCursor()
        tcf = QTextCharFormat()
        tcf.setFontFamily("幼圆")
        tcf.setFontPointSize(30)
        tcf.setFontOverline(True)
        tcf.setFontUnderline(True)
        tc.setCharFormat(tcf)

        tcf2 = QTextCharFormat()
        tcf2.setFontStrikeOut(True)
        # tc.setCharFormat(tcf2)
        tc.mergeCharFormat(tcf2)



        return
        tc = self.te.textCursor()
        tbf = QTextBlockFormat()
        tbf.setAlignment(Qt.AlignCenter)
        tbf.setIndent(2)
        tc.setBlockFormat(tbf)


        return
        tc = self.te.textCursor()
        tcf = QTextCharFormat()
        tcf.setFontFamily("幼圆")
        tcf.setFontPointSize(30)
        tcf.setFontOverline(True)
        tcf.setFontUnderline(True)
        tc.setBlockCharFormat(tcf)


    # 光标插入
    def cursor_insert(self):
        tc = self.te.textCursor()
        tff = QTextFrameFormat()
        tff.setBorder(10)
        tff.setBorderBrush(QColor(100,50,50))
        tff.setRightMargin(50)
        tc.insertFrame(tff)

        doc = self.te.document()
        print(doc.rootFrame())
        root_frame = doc.rootFrame()
        root_frame.setFormat(tff)
        return
        tc = self.te.textCursor()
        tbf = QTextBlockFormat()
        tcf = QTextCharFormat()
        tcf.setFontFamily("隶书")
        tcf.setFontItalic(True)
        tcf.setFontPointSize(60)
        tbf.setAlignment(Qt.AlignRight)
        tbf.setRightMargin(100)
        tbf.setIndent(3)

        tc.insertBlock(tbf,tcf)
        self.te.setFocus()

        return
        tc = self.te.textCursor()
        # tc.insertTable(5,3)
        ttf = QTextTableFormat()
        ttf.setAlignment(Qt.AlignRight)
        ttf.setCellPadding(6)
        ttf.setCellSpacing(4)
        ttf.setColumnWidthConstraints(
            (
                QTextLength(QTextLength.PercentageLength, 50),
                QTextLength(QTextLength.PercentageLength, 40),
                QTextLength(QTextLength.PercentageLength, 10),
            )
        )

        table = tc.insertTable(5,3,ttf)
        table.appendRows(10)


        return
        tc = self.te.textCursor()
        QTextList
        # tl = tc.insertList(QTextListFormat.ListCircle)
        # tl = tc.insertList(QTextListFormat.ListDecimal)
        # tl = tc.createList(QTextListFormat.ListDecimal)
        tlf = QTextListFormat()
        tlf.setIndent(3)
        tlf.setNumberPrefix("<<")
        tlf.setNumberSuffix(">>")
        tlf.setStyle(QTextListFormat.ListDecimal)
        tl = tc.createList(tlf)
        print(tl)

        return
        tc = self.te.textCursor()
        # tdf = QTextDocumentFragment.fromHtml("<h1>aaa</h1>")
        tdf = QTextDocumentFragment.fromPlainText("<h1>aaa</h1>")

        tc.insertFragment(tdf)


        return
        tc = self.te.textCursor()

        tc = self.te.textCursor()
        tif = QTextImageFormat()
        tif.setName("xxx.png")
        tif.setWidth(100)
        tif.setHeight(100)
        # tc.insertImage(tif,QTextFrameFormat.FloatLeft)
        # tc.insertImage(tif,QTextFrameFormat.FloatRight)
        tc.insertImage('xxx.png')
        return
        tcf = QTextCharFormat()
        tcf.setToolTip("web")
        tcf.setFontFamily("隶书")
        tcf.setFontPointSize(66)

        te = self.te.textCursor()
        te.insertText("aaaaa",tcf)

        te.insertHtml("<a href='http://www.tenseip.com'>tenseip</a>")


    # 文本内容的设置
    def text_set(self):
        # 普通文本
        # self.te.setPlainText("<h1>xxx<h1>")
        # self.te.insertPlainText("<h1>xxx<h1>")
        # print(self.te.toPlainText())

        # 富文本
        # self.te.setHtml("<h1>xxx<h1>")
        # self.te.insertHtml("<h2>aaaaaaaa<h2>")
        # print(self.te.toHtml())

        # self.te.setText("<h1>xxx<h1>")

        self.te.append("<h3>fgghh<h3>")


    # 占位提示文本
    def text_show(self):
        self.te.setPlaceholderText("输入你的个人简介")
        print(self.te.placeholderText())





if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())