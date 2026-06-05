#include<bits/stdc++.h>
using namespace std;
void printname(int i,int n){
if(i>n){
    return ;
}
cout<<"gopi"<<endl;
printname(i+1,n);
}
int main(){
    int i;
    int n;
    cin>>n;
    printname(1,n);

}