#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 76-QFOrmLayout-功能作用.py
    time: 2022/7/1 20:41
    software: PyCharm
..................................
"""
from PyQt5.Qt import *



class Window(QWidget):
    def __init__(self,*args,**kwargs):
        super().__init__(*args,**kwargs)
        self.setWindowTitle('QFOrmLayout')
        self.resize(500,500)
        self.setup_ui()


    def setup_ui(self):
        name_label = QLabel("姓名:")
        age_label = QLabel('年龄:')


        name_le = QLineEdit()
        age_sb = QSpinBox()

        sex_label = QLabel('性别:')
        male_rb = QRadioButton('男')
        female_rb = QRadioButton('女')
        h_layout = QHBoxLayout()
        h_layout.addWidget(male_rb)
        h_layout.addWidget(female_rb)

        submit_btn = QPushButton('提交')


        layout = QFormLayout()

        self.setLayout(layout)

        layout.addRow("姓名(&n):",name_le)
        layout.addRow(sex_label,h_layout)
        layout.addRow('年龄(&g):',age_sb)
        layout.addRow(submit_btn)

        # 已经被占用无法使用
        # layout.setWidget(0,QFormLayout.LabelRole,name_label)
        # layout.setWidget(0,QFormLayout.FieldRole,name_le)
        # layout.setLayout(1,QFormLayout.FieldRole,h_layout)

        # layout.addRow(name_label)
        # print(layout.getWidgetPosition(name_label))
        # layout.setWidget(0,QFormLayout.LabelRole,sex_label)
        # layout.setWidget(0,QFormLayout.FieldRole,sex_label)

        # age_sb.destroyed.connect(lambda:print('age_sb'))
        # # layout.removeRow(2)
        # # print(layout.takeRow(2).labelItem.widget().hide())
        # # layout.removeRow(age_sb)
        # layout.removeWidget(age_sb)
        # age_sb.setParent(None)

        print(layout.labelForField(name_le))

        layout.setRowWrapPolicy(QFormLayout.WrapLongRows) # 行的摆放策略
        # layout.setRowWrapPolicy(QFormLayout.WrapAllRows)

        print(layout.formAlignment() == Qt.AlignLeft | Qt.AlignTop)
        # print(layout.setFormAlignment(Qt.AlignLeft | Qt.AlignBottom))
        # layout.setFormAlignment(Qt.AlignLeft | Qt.AlignVCenter)
        layout.setLabelAlignment(Qt.AlignRight) # 标签

        layout.setVerticalSpacing(60)
        layout.setHorizontalSpacing(60)

    def setup_ui_old(self):
        name_label = QLabel("姓名:")
        age_label = QLabel('年龄:')

        # name_label = QLabel("姓名(&n):")
        # age_label = QLabel('年龄(&g):')

        name_le = QLineEdit()
        age_sb = QSpinBox()

        # name_label.setBuddy(name_le)
        # age_label.setBuddy(age_sb)

        sex_label = QLabel('性别:')
        male_rb = QRadioButton('男')
        female_rb = QRadioButton('女')
        h_layout = QHBoxLayout()
        h_layout.addWidget(male_rb)
        h_layout.addWidget(female_rb)


        submit_btn = QPushButton('提交')


        layout = QFormLayout()

        self.setLayout(layout)

        '''
        # layout.addWidget(name_label)
        # layout.addWidget(name_le)

        layout.addRow(name_label,name_le)
        layout.addRow(sex_label,h_layout)
        layout.addRow(age_label,age_sb)
        layout.addRow(submit_btn)
        '''
        layout.addRow("姓名(&n):",name_le)
        # layout.addRow(sex_label,h_layout)
        layout.addRow('年龄(&g):',age_sb)
        layout.addRow(submit_btn)

        layout.insertRow(1,"性别:",h_layout)

        # print(layout.rowCount())
        # print(layout.getWidgetPosition(age_sb))
        print(layout.getLayoutPosition(h_layout))

if __name__ == '__main__':
    import sys
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())