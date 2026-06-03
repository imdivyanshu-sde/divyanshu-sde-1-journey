#include<bits/stdc++.h>
using namespace std;
void printnum(int i,int n){
if(i>=n){
    return ;
}
cout<<n<<" ";
printnum(i,n-1);
}
int main(){
    int i;
    int n;
    cin>>n;
    printnum(0,n);

}