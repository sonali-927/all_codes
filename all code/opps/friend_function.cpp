#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 class Student{
    string name;
    public:
    void setName(string _name){
        name= _name;
    }
friend void display(Student s);

 };
 void display(Student s){
    cout<<s.name;
 }
int main(){
  
    
   
    int a=0;
        Student s;
        s.setName("sona");
        display(s);
        return 0;
    }

