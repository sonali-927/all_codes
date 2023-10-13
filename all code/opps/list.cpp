// list
// 1)push-front()
// 2)push_back()
// 3)front()
// 4)back()
// 5)pop_front()
// 6)pop_back()
// 7)reverse()
// 8)sort()
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(30);
    list<int> :: iterator it;
    for(it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    l.reverse();
    for(it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    l.sort();
    for(it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    l.pop_front();
      for(it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    l.pop_back();
      for(it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    return 0;
}