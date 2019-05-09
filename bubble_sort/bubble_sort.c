/*************************************************************************
	> File Name: bubble_sort.c
	> Author: liuyang
	> Mail: liu-yang91@qq.com 
	> Created Time: 2019年05月09日 星期四 22时25分31秒
 ************************************************************************/

#include<stdio.h>

int bubble_sort(int list_num[], int len)
{
	for(int i = 0; i < len - 1; i++){
		int have_change = 0;
		for(int j = 0; j < len - 1; j++){
			if(list_num[j] < list_num[j+1]){
				have_change = 1;
				int tmp = list_num[j];
				list_num[j] = list_num[j+1];
				list_num[j+1] = tmp;
			}
		}
		if(have_change){
			for(int i = 0; i < len; i++){
				printf("\t%d", list_num[i]);
			}
			printf("\n");
		}else{
			break;
		}
	}
}

int main()
{
    int list_num1[] = {3,1,5,2,6};
	int len = 5;
	bubble_sort(list_num1, len);
	return 0;
}
