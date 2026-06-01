#include<bits/stdc++.h>
using namespace std;
void explainpq(){
    priority_queue<int>pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{8,2,5}
    pq.emplace(10);//{10,8,2,5}
      cout<<pq.top();//print 10

      pq.pop();//print 8

      //size,swap,empty function same as others
     

      //minimum heap()
      priority_queue<int,vector<int>,greater<int>>pq;
      pq.push(5);//{5}
     pq.push(2);//{2,5}
     pq.push(8);//{2,5,8}
     pq.emplace(10);//{2,5,8,,10}

     cout<<pq.top();//print 2
     
      

    }