#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cin>>day;
    switch(day){
        /*if we have instead of int a variabel in case 1
         place we write case 'a' and for all case */
        case 1:
          cout<<"monday";
          break;
        case 2:
         cout<<"tuesday";
         break;
        case 3:
         cout<<"wednesday";
        break;
        case 4:
         cout<<"thrusday";
         break;
        case 5:
            cout<<"friday";
            break;
        case 6:
          cout<<"saturday";
          break;
        case 7:
            cout<<"sunday";
            break;
        default:
            cout<<"invalid";
        
    }
    cout<<" check";
    return 0;
}