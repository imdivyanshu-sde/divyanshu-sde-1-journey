#include<bits/stdc++.h>
using namespace std;
void explainset(){
    map<int,int> mpp;// one key one value
    map<pair<int,int>,int>mpp;//one key two value 
    map<pair<int,int>,int>mpp;// two key one value


    mpp[1]=2;//key value key must be unique and in always storred in sorted order
    mpp.emplace({3,1});//[{1,2},{3,1}]
    mpp.insert({2,4});//[{1,2},{2,4},{3,1}] due to key sorted order
    

    mpp[{2,3}]=10;//key=value


    for(auto it: mpp){
        cout<< it.first<<" "<<it.second<<endl;//print all the key value in an map in sorted order of key
    // first means key and second is value
    }


    cout<<mpp[1];//gives value of 1 key ex here is 2 be print
    cout<<mpp[5];//their is no key here is 5 so it print 0 or null

    auto it=mpp.find(3);
    cout<<*(it).second; // by .second it gives value of key 3 which is here 1

    auto it=mpp.find(5);//not exist so give more then 1 value address from last+1 after the map

    auto it=mpp.lower_bound(2);

    auto it=mpp.upper_bound(3);
    // erase,swap,size,empty,are same as above

}


void explainmultimap(){
    // stored duplicate key and in sorted like [{1,2},{1,3}]
    // everything same as map ,only it can store multiple keys
    // only mpp[key] cannot be used here
}


void explainunordermap(){
    // same as set and unorder_set difference.
    // unique keys but not sorted
    
}