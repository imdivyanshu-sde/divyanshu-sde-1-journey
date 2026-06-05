#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original=n;
    int sum=0;
    while(n>0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }
    if(original==sum){
        cout<<original<<" is a armstrong number";
    }else{
        cout<<original<<" is not a armstrong number";
    }

    return 0;
} 