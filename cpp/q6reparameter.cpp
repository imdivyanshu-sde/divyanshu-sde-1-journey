#include<bits/stdc++.h>
using namespace std;
void parameterwaysum(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    parameterwaysum(i-1,sum+i);
}
int main(){
    int sum=0;
    int i;
    cin>>i;
    parameterwaysum(i,0);
    return 0;
}
