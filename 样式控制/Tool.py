#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: Tool.py
    time: 2022/7/2 16:03
    software: PyCharm
..................................
"""



class QSSTool:
    @staticmethod
    def setQssToObject(file_path,obj):
        with open(file_path,encoding='utf-8') as f:
            obj.setStyleSheet(f.read())


