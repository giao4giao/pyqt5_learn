#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 52-QComboBox-综合案例.py
    time: 2022/6/29 17:03
    software: PyCharm
..................................
"""
from PyQt5.Qt import *


class Window(QWidget):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.setWindowTitle('QComboBox综合案例')
        self.resize(500, 500)
        self.city_dic = {
            "北京": {

                "东城": "001",

                "西城": "002",

                "朝阳": "003",

                "丰台": "004"

            },

            "上海": {

                "黄埔": "005",

                "徐汇": "006",

                "长宁": "007",

                "静安": "008",

                "松江": "009"

            },

            "广东": {

                "广州": "010",

                "深圳": "011",

                "湛江": "012",

                "佛山": "013"

            }

        }

        self.setup_ui()

    def setup_ui(self):
        self.pro = QComboBox(self)
        self.city = QComboBox(self)

        self.pro.setSizeAdjustPolicy(QComboBox.AdjustToContents)
        self.city.setSizeAdjustPolicy(QComboBox.AdjustToContents)

        self.pro.move(90, 100)
        self.city.move(280, 100)


        self.pro.currentIndexChanged[str].connect(self.pro_changed)
        # # pro.setCurrentIndex(0)
        # self.pro_changed(self.pro.currentText())

        self.pro.addItems(self.city_dic.keys())


        self.city.currentIndexChanged[int].connect(self.city_changed)
        self.city_changed(self.city.currentIndex())

    def city_changed(self,city_id):
        # print(city_id)
        num = self.city.itemData(city_id)
        if num:
            print(num)

    def pro_changed(self,pro_name):
        print(pro_name)
        citys = self.city_dic.get(pro_name)
        self.city.blockSignals(True)
        self.city.clear()
        self.city.blockSignals(False)
        # self.city.addItems(citys.keys())
        for key,val in citys.items():
            self.city.addItem(key,val)


if __name__ == '__main__':
    import sys

    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())
