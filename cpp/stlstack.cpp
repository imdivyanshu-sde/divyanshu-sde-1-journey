#include<bits/stdc++.h>
using namespace std;
void explainstack(){
    stack<int>st;// it follow lifo last in first out
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}
    
    cout<<st.top();//print 5 not remove it
    
    st.pop();//st mow look like{3,3,2,1} 5 is removed
    cout<<st.top();//3
    cout<<st.size();//4
    cout<<st.empty();

    stack<int>st1,str2;
    st1.swap(str2);
}