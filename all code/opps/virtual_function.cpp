//VIRTUAL FUNCTION HELP IN OVER RIDE(dikhta nhi h aur wo function override ho jata h)(helps in avoiding the ambiguiety)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
   virtual void display(){
        cout<<"A is called"<<endl;
    }
};
class B: public A{
    public:
    void display(){
cout<<"B is called"<<endl;
    }
};
int main(){
A *a=new B();
a->display();
 return 0;
}