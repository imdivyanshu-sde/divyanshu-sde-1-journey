#include<bits/stdc++.h>
using namespace std;
void explainset(){//sorted and unique
    set<int>st;
    st.insert(1);//{1}
    st.insert(2);//{1,2}
    st.insert(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}

    //functionalaity of insert in vector
    //can be used also,that only increases
    // efficiency

    //begin(),end(),rbegin(),rend(),size(),
    //empty() and swap() are same as those of above

    //{1,2,3,4,5}
    auto it =st.find(3);//return to the iterator point to the 3

      //{1,2,3,4,5}
    auto it =st.find(6);// return to the iterator  last value after

    

    st.erase(5);//erase 5

    int cnt=st.count(1);//if 1 is in data gives 1 if ot gives 0


    auto it=st.find(3);
    st.erase(it);


    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);


    //upper bound , upper bound
    auto it=st.lower_bound(2);

    auto it=st.upper_bound(3);


}

void explainmultiset(){
    //everything same as set
    //sorted but not unique stored duplicate

    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    

    ms.erase(1);//all 1's erased

    int cnt=ms.count(1);


    //only single one erased
    ms.erase(ms.find(1));
    
    //{1,,1,1}
    ms.erase(ms.find(1),ms.find(1)+2);//{1}
    //rest all function same as set
}

void explainUSet(){
    unordered set<int> st;//unique but not sorted not store in sequence
    /*lower_bound and upper_bound function
    does not work ,rest all function same
    as above ,it does not stored un any
    particular order it has a better complexity
    than set in most cases,expect some when collision happend*/

}