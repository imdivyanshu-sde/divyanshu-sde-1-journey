#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][5];// 2d array are row*coloumn
    cin>>arr[0][0]>>arr[0][1]>>arr[0][2]>>arr[0][3]>>arr[0][4];
    arr[0][3]=10;
    cout<<arr[0][3];//also have garbage value saves in place we don't put values
}