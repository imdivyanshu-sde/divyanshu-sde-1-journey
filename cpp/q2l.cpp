#include<bits/stdc++.h>
using namespace std;
int main(){
    int rev=0;
    int n;
    cin>>n;
    while(n>0){
        int ld=n%10;
        rev=(rev*10)+ld;
        n=n/10;

    }
    cout<<rev;
    return 0;
} 