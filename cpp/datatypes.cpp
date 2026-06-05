#include<bits/stdc++.h>
using namespace std;
int main(){
    //int<long<long long
    int x,y;
    cin >> x >> y;
    cout<<"the value of int x is: "<< x <<endl <<"the value of y is :"<<y<<endl;

    long a,b;
    cin>>a>>b;
    cout<<"the value of a is: "<<a<<endl<<"the value of b is:"<<b<<endl;
    
    
    //number with decimal point
    //float //double
    float c,d;
    cin>>c>>d;
    cout<<"the value of c is: "<<c<<endl<<"the value of d is "<<d<<endl;
    
    //string and getline
    string s;
    cin>>s;
    cout<<"for only one word= "<<s<<endl;
    // to print one complete line but 1 only be printed
    string e;
    getline(cin,e);
    cout<<"for one complete line including space everything : "<<e;
    //char simplest one
    char ch='g';
    // cin>>ch;
    cout<<ch;


    return 0;
}