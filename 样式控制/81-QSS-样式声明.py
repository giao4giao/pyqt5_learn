#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 81-QSS-样式声明.py
    time: 2022/7/2 21:05
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
        """
        textedit = QTextEdit('测试',self)
        layout = QVBoxLayout(self)
        layout.addWidget(textedit)

        # textedit.resize(300,300)
        # textedit.move(100,100)


        # self.qss_border_testedit(textedit)
        self.qss_font_testedit(textedit)
        """

        sb = QSpinBox(self)
        sb.resize(300,300)
        sb.move(100,100)

        self.QSpinBox_style(sb)

    def QSpinBox_style(self, label: QSpinBox):
        text = """
        QSpinBox {
            font-size:26px;
            color:orange;
            border:10px double red;
            border-radius:10px;
            background-color:lightgray;
            padding-left:90px;
        }
        
        QSpinBox::up-button,QSpinBox::down-button{
            width:50px;
            height:50px;
        }
        QSpinBox::down-button{
            /*subcontrol-origin:border;*/
            subcontrol-origin:padding;
            subcontrol-position:left center;
            image: url(left.png);
        }
        QSpinBox::down-button:hover{
            left:-10px;
        }
        QSpinBox::up-button{
            subcontrol-origin:padding;
            subcontrol-position:right center;
            image: url(right.png);
        }
        QSpinBox::up-button:hover{
            right:-10px;
        }
        
        """

        label.setStyleSheet(text)


    def qss_font_testedit(self, label: QTextEdit):
        text = """
        QTextEdit {
            font-family:隶书;
            font-size:30px;
            font-style:italic;
            font-weight:300;
            color:orange;
            
            min-width:200px;
            min-height:200px;
            max-width:500px;
            max-height:500px;
        }   
        """

        label.setStyleSheet(text)


    def qss_border_testedit(self, label: QTextEdit):
        text = """
        QTextEdit {
            background-color:red;
            background-image:url(desktop.png);
            background-repeat:no-repeat;
            /*background-repeat:repeat-xy;*/
            background-position:right top;
            /*background-origin:border;*/
            background-origin:margin;
            background-clip:padding;

            color:orange;
            border:20px double green;

            padding:20px;
            padding-top:150px;
            
            background-attachment:fixed;
        }   
        """

        label.setStyleSheet(text)


    def setup_ui_old(self):
        label = QLabel('test',self)
        label.resize(300,300)
        # label.move(100,100)


        self.qss_border(label)



    # qss 边框
    def qss_border_1(self,label:QLabel):
        # 上右下左
        label.setStyleSheet("""
        QLabel{
            /*background-color:qlineargradient(x1:0,y1:0,x2:1, y2:1,stop:0 red, stop: 0.4 gray, stop:1 green);*/
            /*background-color:qradialgradient(cx:0.5,cy:0.5,radius:0.5, fx:0.5,fy:0.5, stop: 0 red, stop:1 orange);*/
            background-color:qconicalgradient(cx:0.5, cy:0.5 angle:10, stop:0 red, stop:1 orange);
            border-width:2px 4px 8px 16px;
            border-style:dotted dashed solid double;
            border-top-style:groove;
            border-color: red green orange;
            border-left-color: rgb(155,200,155);
            border-right-color: #00ff00;
            /*border-radius:150px;*/
            border-top-left-radius:150px;
        }   
        """)

    def qss_border_2(self,label:QLabel):
        text = """
        QLabel{
            background-color:qconicalgradient(cx:0.5, cy:0.5 angle:10, stop:0 red, stop:1 orange);
            border-image:url(border.png) 30px 30px 30px 30px stretch;
            border-width:30px;
            margin:20px 40px 80px 100px;
            margin-left:20px;
        }   
        """

        label.setStyleSheet(text)

    def qss_border(self,label:QLabel):
        text = """
        QLabel{
            background-color:red;
            background-image:url(desktop.png);
            background-repeat:no-repeat;
            /*background-repeat:repeat-xy;*/
            background-position:right top;
            /*background-origin:border;*/
            background-origin:margin;
            background-clip:padding;
            
            color:orange;
            border:20px double green;
            
            padding:20px;
            padding-top:150px;
        }   
        """

        label.setStyleSheet(text)


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())