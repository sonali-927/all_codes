// a=>c,b=>d
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void display(){
        cout<<"A is called"<<endl;
    }
};
class B:public A{

};
class c:public A{

};
class D: public B,public C{

};
int main(){
D d;
d.display();
    return 0;
}