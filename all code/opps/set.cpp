//sorted and unique(set)// 1)insert()
// 2)find()
// 3)count()
// 4)erase()
// difference
// set-sorted,bst,o(logn)
// unordered set-unsorted,hashing,0(1)
// for unordered just change the set name fron set to unordered_set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;//unordered_set<int>s;
    s.insert(5);//5
    s.insert(4);//4,5
    s.insert(3);//3,4,5
       s.insert(2);//2,3,4,5
          s.insert(1);//1,2,3,4,5
        //   auto x=s.find(3);
        //   cout<<*x;
        // if(s.count(3)){
        //     cout<<"present";
        // }
        // else cout<<"Absent";
        s.erase(3);//log n
        for(auto x:s){
            cout<<x<<" ";
        }
    return 0;
}