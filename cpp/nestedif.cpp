#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if (age<=18){
        cout<<"not eligibel for job";
    }
    else if (age<=57){
         cout<<"eligibel for job";
         if(age>=55){
            cout<<" but retirement soon";
           
            
         }
    }
    else if(age>57){
        cout<<"retirement time";
    }
    return 0;
}