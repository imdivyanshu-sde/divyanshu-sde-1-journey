#include<bits/stdc++.h>
using namespace std;
void myway(){
bool comp(pair<int,int>p1,pair<int,int>p2) {// take only 2 pair
    if(p1.second<p2.second) return true;
    if(p1.second > p2.second)return false;
    // they are same 
    if(p1.first > p2.first) return true;
    return false;

}

void explainextra(){
    sort(a,a+n);//a+n means after alst so last is not included sooo array sorted all
    //for vector
    sort(v.begin(),v.end());
    
    //if we want to sort from like index 3 to 5 only we use 
    sort(a+2,a+4);

    //sort in decending order {5,1}
    sort(a,a+n,greater<int>);

    //now not in ascending and not in decending i want to sort in my way
    pair<int,int>a[]={{1,2},{2,1},{4,1}};
    //sort it according to second element ex like 2,1,1 
    //if second same then sort it according 
    // to first element but in descending
    
    sort(a,a+n,comp);
    //{4,1},{2,1},{1,2}

   int num=7;
   int cnt=_builtin_popcount();//it gives how many 1 in binary of 7

   long long num=1655267378;
   int cnt=_builtin_popcountll();

   string s="123";// we first sort it if not sorted to get high permutation
   sort(s.begin(),s.end());
   
   do{
    cout<<s<<endl;
   }while(next_permutation(s.begin(),s.end()));
   // gives permutation


   int maxi=*max_element(a,a+n);//highest element in array
   }
   int main(){
    return 0;
   }


}
