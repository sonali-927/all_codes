#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

// Yogesh();
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int target;
cin>>target;
int flag=0;
for(int i=0;i<n;i++){
    if(a[i]==target){
        flag=1;
        break;
    }
}
if(flag==1)
cout<<"True";
else
cout<<"false";
return 0;
}
// time complexity:-
// O[n]