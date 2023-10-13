// 1)push()
// 2)pop()
// 3)top()
// 4)empty()
// 5)size()
// PRERIOTY QUEUE-MIN HIP,MAX HEAP.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
// priority_queue<int>pq;//by default max heap
// pq.push(1);//1
// pq.push(2);//2,1
// pq.push(3);//3,2,1
// pq.push(4);//4,3,2,1
// cout<<pq.size();
// while(!pq.empty()){
//     int val=pq.top();
//     cout<<val<<" ";
//     pq.pop();
// }
priority_queue<int,vector<int>,greater<int>>pq;//by default min heap
pq.push(1);//1
pq.push(2);//2,1
pq.push(3);//3,2,1
pq.push(4);//4,3,2,1
cout<<pq.size()<<endl;
while(!pq.empty()){
    int val=pq.top();
    cout<<val<<" ";
    pq.pop();
}

    return 0;
}