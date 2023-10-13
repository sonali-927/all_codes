// 1)push()
// 2)pop()
// 3)top()
// 4)empty()
// 5)size()
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
     s.push(2);
      s.push(3);
       s.push(4);
    //    cout<<s.top()<<endl;
    //    s.pop();
    //    cout<<s.top()<<endl;
    // cout<<s.size()<<endl;
    // if(s.empty()){
    //     cout<<"Empty"<<endl;
    // }
    // else{
    //     cout<<" not empty"<<endl;
    // }
    while(!s.empty()){
int val=s.top();
cout<<val<<" ";
s.pop();
    }
       return 0;
}