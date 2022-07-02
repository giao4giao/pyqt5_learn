#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 01-QObject.py.py
    time: 2022/5/22 0:55
    software: PyCharm
..................................
"""
from PyQt5.Qt import *


class Window(QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("qobject")
        self.resize(500,500)
        self.setup_ui()

    def setup_ui(self):
        # self.test_mro()
        # self.test_api()
        # self.test_ex()
        # self.test_parent()
        # self.test_del_mode()
        # self.test_connect()
        # self.test_connect_ex()
        # self.test_type()
        self.test_type_ex()
        # self.test_del_object()

    def test_mro(self):
        """QObject继承结构测试"""
        mros = QObject.mro()
        for i in mros:
            print(i)

    def test_api(self):
        """QObject对象名称和属性的操作"""
        obj = QObject()
        obj.setObjectName('notice')
        print(obj.objectName())

        obj.setProperty('notice_level','error')
        obj.setProperty('notice_level2','warning')

        print(obj.property('notice_level'))
        print(obj.dynamicPropertyNames())

    def test_ex(self):
        """QObject对象名称和属性的操作案例演示"""
        with open("QObject.qss")as f:
            qApp.setStyleSheet(f.read())

        label = QLabel(self)
        label.setObjectName('notice')
        label.setProperty('notice_level','warning')
        label.setText('text')

        # label.setStyleSheet("font-size: 20 px; color:red;")
        label2 = QLabel(self)
        label2.move(100,100)
        label2.setText('text2')

        label3 = QLabel(self)
        label3.move(150,150)
        label3.setObjectName('notice2')
        label3.setText('xxxxxxxxx')


        btn = QPushButton(self)
        btn.move(50,50)
        btn.setText('btn')
        btn.setObjectName('notice')

    def test_parent(self):
        """QObject对象的父子关系操作"""
        obj0 = QObject()
        obj1 = QObject()
        obj2 = QObject()
        obj3 = QObject()
        obj4 = QObject()
        obj5 = QObject()
        print('obj0',obj0)
        print('obj1',obj1)
        print('obj2',obj2)
        print('obj3',obj3)
        print('obj4',obj4)
        print('obj5',obj5)

        obj1.setParent(obj0)
        # labal = QLabel()
        # labal.setParent(obj0)
        obj2.setParent(obj0)
        obj2.setObjectName('2')
        obj3.setParent(obj1)
        obj3.setObjectName('3')
        obj4.setParent(obj2)
        obj5.setParent(obj2)

        # print(obj4.parent())
        # print(obj0.children()) # 直接子对象

        print(obj0.findChild(QObject,'3',Qt.FindDirectChildrenOnly))
        print(obj0.findChildren(QObject))

    def test_del_mode(self):
        """QObject信号的操作"""
        obj1 = QObject()
        self.obj1 = obj1
        obj2 = QObject()

        obj2.setParent(obj1)

        #监听obj2对象被释放
        obj2.destroyed.connect(lambda:print('obj2对象被释放了'))

        del self.obj1

    def test_connect(self):
        """QObject信号的操作"""
        def _destroyed():
            """尝试destroyed"""
            self.obj.destroyed.connect(lambda obj:print(f'{obj} 对象被释放了'))
            del self.obj

        def _objectNameChanged():
            self.obj.objectNameChanged.connect(lambda obj: print(f'{obj} 对象的名称被改变了'))
            self.obj.setObjectName('xxx')

            # self.obj.objectNameChanged.disconnect()
            print(self.obj.signalsBlocked(),1)
            self.obj.blockSignals(True)
            print(self.obj.signalsBlocked(),2)
            self.obj.setObjectName('ooo')

            self.obj.blockSignals(False)
            print(self.obj.signalsBlocked(),3)

            self.obj.setObjectName('xxoo')

        def _objectNameChanged2():
            """获取对象"""
            self.obj.objectNameChanged.connect(lambda obj: print(f'{obj} 对象的名称被改变了1'))
            self.obj.objectNameChanged.connect(lambda obj: print(f'{obj} 对象的名称被改变了2'))

            # self.obj.receivers("objectNameChanged")  x
            print(self.obj.receivers(self.obj.objectNameChanged))



        self.obj = QObject()
        # obj.destroyed
        # _destroyed()
        # obj.objectNameChanged
        # _objectNameChanged()
        _objectNameChanged2()

    def test_connect_ex(self):
        """QObject信号的操作案例"""
        btn = QPushButton(self)
        btn.setText('click')
        def cao():
            print('click')
        btn.clicked.connect(cao)


        def z(title):
            print(title)
            self.blockSignals(True)
            self.setWindowTitle('zzz-'+title)
            self.blockSignals(False)


        # 窗口标题变化
        self.windowTitleChanged.connect(z)
        self.setWindowTitle('xxx')
        self.setWindowTitle('xxx2')
        self.setWindowTitle('xxx3')

    def test_type(self):
        """QObject类型判定"""
        obj = QObject()
        w = QWidget()
        btn = QPushButton()
        label = QLabel()

        objs = [obj,w,btn,label]
        for o in objs:
            # 判断是不是控件
            # print(o.isWidgetType())
            # 判断父类
            # print(o.inherits("QWidget"))
            print(o.inherits("QPushButton"))

    def test_type_ex(self):
        """QObject类型判定案例"""
        label1 = QLabel(self)
        label1.setText('xxxxxx')
        label1.move(100,100)

        label2 = QLabel(self)
        label2.setText('yyyyyy')
        label2.move(200,200)


        btn = QPushButton(self)
        btn.setText('click')
        btn.move(300,300)

        # for widget in self.findChildren(QLabel):
        #     print(widget)
        for widget in self.children():
            # if widget.isWidgetType():
            if widget.inherits('QLabel'):
                print('yes')
                widget.setStyleSheet('background-color:cyan;')

        # del label2
        label2.deleteLater()

    def test_del_object(self):
        """QObject对象删除"""
        obj1 = QObject()
        self.obj1 = obj1
        obj2 = QObject()
        obj3 = QObject()

        obj3.setParent(obj2)
        obj2.setParent(obj1)

        obj1.destroyed.connect(lambda:print('obj1被释放了'))
        obj2.destroyed.connect(lambda:print('obj2被释放了'))
        obj3.destroyed.connect(lambda:print('obj3被释放了'))

        # del obj2
        obj2.deleteLater()
        print(obj1.children())
        print(obj2)


def test_all():
    """Qwidget控件的父子关系"""
    def test1():
        """设置父子控件"""
        global win1,win2
        win1 = QWidget()
        win1.setWindowTitle('红色')
        win1.setStyleSheet("background-color:red;")
        win1.resize(500,500)
        win1.show()
        win2 = QWidget()
        win2.setWindowTitle('绿色')
        win2.setStyleSheet("background-color:green;")
        win2.setParent(win1)
        # win2.resize(100,100)
        win2.resize(100,1000)
        win2.show()

    def test2():
        """设置父子控件"""
        global win1,win2
        win1 = QWidget()
        win1.setWindowTitle('红色')
        win1.setStyleSheet("background-color:red;")
        win1.resize(500,500)
        win1.show()
        win2 = QWidget()
        win2.setWindowTitle('绿色')
        win2.setStyleSheet("background-color:green;")
        win2.resize(100,1000)
        win2.show()


    def test3():
        """包含两个子控件"""
        global win_root
        win_root = QWidget()
        label1 = QLabel()
        label1.setText('label1')
        label1.setParent(win_root)
        btn = QPushButton(win_root)
        win_root.show()

    def test4():
        """包含两个以上子控件"""
        global win_root
        win_root = QWidget()
        label1 = QLabel()
        label1.setText('label1')
        label1.setParent(win_root)

        label2 = QLabel()
        label2.setText('label2')
        label2.setParent(win_root)
        label2.move(20,20)

        btn = QPushButton(win_root)
        btn.move(100,100)
        btn.setText('btn')

        label3 = QLabel()
        label3.setText('label3')
        label3.setParent(win_root)
        label3.move(60,60)

        win_root.show()



        # for sub_widget in win_root.children():
        #     print(sub_widget)
        for sub_widget in win_root.findChildren(QLabel):
            # print(sub_widget)
            sub_widget.setStyleSheet("background-color:cyan;")


if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    # test_all().test4()
    window = Window()
    window.show()
    sys.exit(app.exec_())











