#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
int ans=binary_search(a,a+n,3);
    cout<<ans;
    return 0;
}