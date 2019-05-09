#!/usr/bin/env python
# -*- coding: utf-8 -*-
#########################################################################
# File Name: bubble_sort.py
# Author: liuyang
# mail: liu-yang91@qq.com
# Created Time: 2019年05月09日 星期四 21时56分24秒
#########################################################################

def bubble_sort(list_num):
    print("\nsource list:\n%s \n------ " % str(list_num))
    for j in range(len(list_num) - 1):
        have_change = False
        for i in range(len(list_num) - 1):
            if list_num[i] < list_num[i+1]:
                have_change = True
                tmp = list_num[i]
                list_num[i] = list_num[i+1]
                list_num[i+1] = tmp
        if not have_change:
            break
        else:
            print(list_num) 



if __name__ == "__main__":
    list1 = [1,3,2,9,6]
    bubble_sort(list1)

    list2 = [1,2,3,4,5]
    bubble_sort(list2)
