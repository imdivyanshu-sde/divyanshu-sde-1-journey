#include<bits/stdc++.h>
using namespace std;
int sumfunctional(int i){
    if(i==0){
        return 0;
    }
    return i + sumfunctional(i-1);
}
int main(){
    int i;
    cin>>i;
   cout<< sumfunctional(i);
    return 0;
}
