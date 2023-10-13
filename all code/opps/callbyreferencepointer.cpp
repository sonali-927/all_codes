#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int n,int *a){
    int temp =a[0];
    a[0]=a[1];
    a[1]=temp;
    
}
int main(){
    int a[2];
    for(int i=0;i<2;i++){
        cin>>a[i];
    }
    int n=2;
    solve(n,a);
    cout<<a[0]<<" "<<a[1];
    return 0;
}