#!/usr/bin/env python
# encoding: utf-8
"""
.................................
    author: qwq
    version: 3.9
    file: 语言特性.py
    time: 2022/6/16 16:37
    software: PyCharm
..................................
"""

# print("{1}:{0:.6f}".format(3.1415926,"π"))

# x = eval(input())
# y = eval(input())
# print(abs(x+y))

# 20  0001 0100
# 3   0000 0011
# 按位或
# 23  0001 0111

print(20|3)

s1 = "ss"
s2 = "fdf"
print("{0:^4}{1:!<9}".format(s1,s2))
print("".find("dd"))

# t56 {0：^4} 代表把第一format里面的字符串在四个字符里面的中间，
# {1:!<9} 代表把第二format里的字符串用！补到9位数。
# t124 find是找“3”在str字符串里面出现的一次位置的编号，从0开始这个3是在第7个结果就是6
# 如果find里面的字符串在前面的字符串里面不存在那就返回-1

