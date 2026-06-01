#include<bits/stdc++.h>
using namespace std;
void explainvector(){
    vector<int>v;//declare vector instead of int any data types v name to store can be anything
v.push_back(1);//like upper line create empty vector it push value in it
v.emplace_back(2);//and it dynamically add one more value of it it was fast then push back

//vector of pair data types
vector<pair<int,int>>vec;//for vector pair
v.push_back({1,2});
v.emplace_back(1,2);//syntext change in emplace


//vector inside value change
vector<int>v(5,100)//it means he has 5 {100,100,100,100,100} starting with 0 to 4 indexing
vector<int> v(5)// it means now he has 5 any garbage value ;
// they can always inrease size for pre define too


//copy vector
vector<int>v1(5,20);//it means {20,20,20,20,20}
vector<int>v2(v1);//it copies v1 but it's copy not original

// accessing vector 
//ex an vector of like {2,4,6,8,10}
//how to access it
// option 1 like array
cout<<v[0];//for first value
cout<<v[2];
cout<<v.back()<<" "//it prints 10


// iterator 2nd option
vector<int>::iterator it=v.begin();
//so here in place of int can be any data types according to data types
//it is a name can be any v.begin points to memeory not 4 to print 2 we do *(v.begin)
it++;//what it does increment next indexing after v.begin ex 4 
cout<<*(it)<<" ";// it print 4 see how * used
it=it+2;//now it prints 8 due to +2
cout<<*(it)<<" ";// to print value not address by *


//some other iterator
vector<int>::iterator it=v.end();// points to after last vector like after 10
// to move to 10 we do it--
vector<int>::iterator it=v.rend();//pints to before first ex before 2
vector<int>::iterator it=v.rbegin();//it points to the exactly 10 it moves in reverse
//like it++ means 8 in this

//to print whole vector
for(vector<int>::iterator it=v.begin();it !=v.end();it++){
cout<<*(it)<<" ";
}
// short auto detect data types and print
for(auto it=v.begin();it != v.end();it++){
cout<<*(it)<<" ";}
for(int it:v){
    cout<<it<<" ";
}

// delete from vector
//{10,20,30,40,50,60}
v.erase(v.begin()+1);//delete 20

v.erase(v.begin()+2,v.begin()+4);
//delete not end before end {10,20,50,60}


//insert function
vector<int>v(2,100);//{100,100}
v.insert(v.begin(),300);//{300,100,100}
v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

vector<int> gopi(2,50)//{50,50}
v.insert(v.begin(),copy.begin(),copy end());//if .begin(){50,50,300,10,10,100,100}
}