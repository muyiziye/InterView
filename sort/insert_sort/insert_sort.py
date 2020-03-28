#!/usr/bin/env python
# -*- coding: utf-8 -*-
#########################################################################
# File Name: insert_sort.py
# Author: liuyang
# mail: liu-yang91@qq.com
# Created Time: 2019年05月12日 星期日 14时36分33秒
#########################################################################

def insert_sort(data):
    ret_data = []
    for i in range(0, len(data)):
        insert_data = data.pop()
        print(insert_data)
        if ret_data:
            if insert_data <= ret_data[0]:
                ret_data = [insert_data] + ret_data
            elif insert_data >= ret_data[len(ret_data)-1]:
                ret_data = ret_data + [insert_data]
            else:
                for j in range(0, len(ret_data)-1):
                    if ret_data[j] <= insert_data and ret_data[j+1] >= insert_data:
                        ret_data = ret_data[:j+1] + [insert_data] + ret_data[j+1:]
                        break
        else:
            ret_data = [insert_data]
    return ret_data


if __name__ == "__main__":
    
    data = [6,3,2,5,4,9,8,11,4,2,5]
    print(insert_sort(data))
