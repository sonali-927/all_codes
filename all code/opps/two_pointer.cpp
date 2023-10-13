#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    
for(int i=0;i<n;i++)cin>>a[i];
int target;
cin>>target;
int f=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]+a[j]==target){
            cout<<"true";
            f=1;
            break;
        }
}
}
if(f==0)
cout<<"false";

    return 0;}