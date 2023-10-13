#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    void solve (int n){
        if(n==5)
        return;
        cout<<n<<" ";
    solve(n+1);

    }
    int main(){
        solve(1);
        return 0;
    }