#include<iostream>
#include<stdlib.h>
#include<time.h>

#include"bubble_sort.hpp"
#include"insert_sort.hpp"

using namespace std;

#define MAX 100

void print_arry(int* sort_list, int length, string show_msg=""){
    if ("" != show_msg){
        cout << show_msg << endl;
    }
    for (int i=0; i<length; i++){
        cout << sort_list[i] << " ";
    }
    cout << endl;
}

int main(){
    srand((unsigned)time(NULL));

    cout << "Please input the length of list: " << endl;
    int list_length = 0;
    cin >> list_length;
    cout << "The length of list is " << list_length << endl;
    int* sort_list = new int[list_length];

    for(int i=0; i<list_length; i++){
        sort_list[i] = rand()%MAX;
    }

    print_arry(sort_list, list_length, "Show the original list:");

    //bubble_sort(sort_list, list_length);
    //insert_sort_order(sort_list, list_length);
    insert_sort_reverse(sort_list, list_length);

    print_arry(sort_list, list_length, "Show the final list:");

    delete []sort_list;
    return 0;
}
