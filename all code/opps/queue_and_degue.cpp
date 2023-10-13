
// queue-
// 1)push()
// 2)pop()
// 3)size()
// 4)frount()
// 5)back()
// 6)empty()
// deque-
// 1)push_back()
// 2)push_front()
// 3)pop_front()
// 4)pop_back()
// 5)front()
// 6)back()
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //queue
    // queue<int>q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // cout<<q.size()<<endl;
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // cout<<q.empty()<<endl;
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    //deque
    deque<int>dq;
    dq.push_back(10);//10
    dq.push_front(20);//20,10
    dq.push_back(30);//20,10,30
    dq.pop_back();//20,10
    dq.pop_front();//10

    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }

    return 0;
}