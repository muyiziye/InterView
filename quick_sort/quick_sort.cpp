/*************************************************************************
	> File Name: quick_sort.cpp
	> Author: liuyang
	> Mail: liu-yang91@qq.com 
	> Created Time: 2019年05月12日 星期日 11时43分07秒
 ************************************************************************/

#include<iostream>
using namespace std;

int quick_sort(int data[], int start, int end)
{
	if (start >= end) {
		return data[start];
	}
	else{
		int base = data[start];
		int i = start;
		int j = end; 
		while(i < j) {
			for (j; j > start; j--) {
				if (data[j] < base) {
					int tmp;
					tmp = data[i];
					data[i] = data[j];
					data[j] = tmp;
					break;
				}
				if(i>=j){
					break;
				}
			}	

			for (i; i < end; i++) {
				if (data[i] > base) {
					int tmp;
					tmp = data[i];
					data[i] = data[j];
					data[j] = tmp;
					break;
				}
				if(i>=j){
					break;
				}
			}
		}
		quick_sort(data, start, i-1);
		quick_sort(data, i+1, end);
	}
}

int main()
{
	int data[] = {10, 7, 9, 13, 4, 3, 6, 9, 0, 5, 21};
	quick_sort(data, 0, 10);
	for (int i=0; i<11; i++) {
		cout << data[i]<< " ";
	}
	cout << endl;
}
