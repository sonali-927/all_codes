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
public:
void display(){//a should be called ,instead of a b is being called
}
};
int main(){
    B b;
    b.display();
    return 0;
}