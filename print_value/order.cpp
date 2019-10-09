/*************************************************************************
        > File Name: order.cpp
        > Author: liuyang
        > Created Time: Wed 09 Oct 2019 08:53:54 PM CST
 ************************************************************************/

#include<iostream>

#include <iomanip>
using namespace std;

int main(){
    int n =0 ,m = 0;
    int a[100][100] = {0};
    cout << "please input n and m" << endl;
    cin >> n >> m;
    cout << n << " "<< m << endl;
    int max = 0;
    cout << "max = " << max << endl;
    for (int sum=0; sum < n+m; sum ++) {
        for (int i=0;i<=sum;i++){
            if (sum - i<n && i<m){
                a[sum-i][i] = max++;
            }
        }
    }

    for(int i = 0; i <n; i++){
        for (int j=0; j<m; j++){
            cout << setw(4) << a[i][j]+4;
        }
        cout << endl;
    }
}
