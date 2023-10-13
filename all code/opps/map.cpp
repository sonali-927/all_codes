// 1)insert
// 2)find and more
//map->sorted
// map-sorted,bst,0(log n)
// unordered map- unsorted,hashing,o(1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>m;//unordered_map<int,int>m;
    m.insert({1,2});//this way key=1 and value=2;
    m[3]=5;//or this way key=3 and value=5;
    m[4]=8;
    m[2]=20;
    auto val=m.find(4);
    cout<<val->first<<" "<<val->second;
    // for(auto x:m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    return 0;
}