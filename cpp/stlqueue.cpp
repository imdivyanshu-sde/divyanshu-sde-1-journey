#include<bits/stdc++.h>
using namespace std;
void explainqueue(){
queue<int>q;
q.push(1);//{1}
q.push(2);//{1,2}
q.emplace(4);//{1,2,4}

q.back()+=5; //{1,2,9}
cout<<q.back();//print 9


q.pop();//{2,9} due to fifo
cout<<q.front();//print 2

//size swap empty same as stack
}