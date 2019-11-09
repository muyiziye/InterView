
#include<iostream>

#include"insert_sort.hpp"

int insert_sort_reverse(int* sort_list, int length){
    for(int i = 1; i < length; i++){
        int key = sort_list[i];
        for(int j = i; j >= 0; j--){
            if(key > sort_list[j-1] && 0 != j){
                sort_list[j] = sort_list[j-1];
            }else{
                sort_list[j] = key;
                break;
            }
        }
    }
    return 0;
}

int insert_sort_order(int* sort_list, int length){
    for(int i = 1; i < length; i++){
        int key = sort_list[i];
        for(int j = i; j >= 0; j--){
            if(key < sort_list[j-1] && 0 != j){
                sort_list[j] = sort_list[j-1];
            }else{
                sort_list[j] = key;
                break;
            }
        }
    }
    return 0;
}

