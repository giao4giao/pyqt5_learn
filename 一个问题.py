#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 一个问题.py
    time: 2022/5/23 0:13
    software: PyCharm
..................................
"""

# mingling = 'def num(a,b):\n\treturn a+b'
# exec(mingling)
# print(num(1,2))

# def main():
#     mingling = 'def num(a,b):\n\treturn a+b'
#     exec(mingling)
#     print(num(1, 2))

def main():
    mingling = 'global num\ndef num(a,b):\n\treturn a+b'
    exec(mingling)
    print(num(1, 2))

if __name__ == '__main__':
    main()

