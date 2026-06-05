#include <bits/stdc++.h>
using namespace std;
void printnum(int i,int n){
    if(i<1){
        return ;
    }
    printnum(i-1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    printnum(n,n);
}
