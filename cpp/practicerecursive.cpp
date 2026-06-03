#include<bits/stdc++.h>
using namespace std;
int recursivemul(int n){
    if(n==1){
        return 1;
    }
    return n* recursivemul(n-1);
    
}
    int main(){
        int i;
        cin>>i;
        cout<<recursivemul(i);
        return 0;

    }
