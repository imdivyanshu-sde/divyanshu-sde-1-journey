#include <bits/stdc++.h>
using namespace std;
void printnum(int i,int n){
    if(i>n){
        return ;
    }
    printnum(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    printnum(1,n);
}
