#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if (marks<25){
        cout<<"F garde";
    }
    if(marks>=25 && marks<=44){
        cout<<"E grade";
    }
    if(marks>=45 && marks<=49){
        cout<<"D garde";
    }
    if (marks>=50 && marks<=59){
        cout<<"C garde";
    }
    if (marks>=60 && marks<=79){
        cout<<"B garde";
    }
    if(marks>=80 && marks<=100){
        cout<<"A grade";
    }
}


/*if we use if we need two condition in if but else if make it more easiear and need only
one condition for same problem because he does,t go back in previous if else he know's it
incorrect so only check next and fast look below for same problem */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if (marks<25){
        cout<<"F garde";
    }
    else if(marks<=44){
        cout<<"E grade";
    }
    else if(marks<=49){
        cout<<"D garde";
    }
    else if (marks<=59){
        cout<<"C garde";
    }
    else if (marks<=79){
        cout<<"B garde";
    }
    else if(marks<=100){
        cout<<"A grade";
    }
    return 0;
}