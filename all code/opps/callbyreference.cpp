#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int &n){
    n=n+1;
    cout<<n;
}
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int n=5;
    solve(n);
    return 0;
}