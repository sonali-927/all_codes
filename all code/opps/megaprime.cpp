#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t%1==0 && t%t==0){
        cout<<t;
    }
    else {
        cout<<"not a prime number";
    }
}
