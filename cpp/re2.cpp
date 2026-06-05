#include<bits/stdc++.h>
using namespace std;
void printnum(int i,int n){
if(i>n){
    return ;
}
cout<<i<<" ";
printnum(i+1,n);
}
int main(){
    int i;
    int n;
    cin>>n;
    printnum(1,n);

}