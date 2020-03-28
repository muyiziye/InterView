#!/usr/bin/env python
# -*- coding: utf-8 -*-
#########################################################################
# File Name: quick_sort.py
# Author: liuyang
# mail: liu-yang91@qq.com
# Created Time: 2019年05月11日 星期六 09时37分49秒
#########################################################################

def quick_sort(data):
    if len(data) >= 2:
        mid = data[len(data)//2]
        left, right = [], []
        data.remove(mid)
        for num in data:
            if num >= mid:
                right.append(num)
            else:
                left.append(num)
        return quick_sort(left) + [mid] + quick_sort(right)
    else:
        return data

if "__main__" == __name__:
    num_list = [6,3,7,4,9,9,8,4,1]
    print(quick_sort(num_list))
