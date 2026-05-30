#include<bits/stdc++.h>
using namespace std;
void pasbyvalue(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num;
    cin>>num;
    pasbyvalue(num);
    cout<<num<<endl;// pass by value means change in copy orginal remain same as you see by this print
    return 0;
}

//pass by refrence
void pasbyref(string &s){ //change in orginal just by & or for num &num
    s[0]='g';  // array always by refrence does'nt need & in array
    cout<<s<<endl;
}
int main(){
    string s="topi";
    cout<<s<<endl;
    pasbyref(s);
    cout<<s<<endl;
}