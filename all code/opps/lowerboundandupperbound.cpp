// in searching
// lower_bound->return iterator(agr mil gya searched element),return next iterator(agr nhi mila element). 
// upper_bound->return next iterator(agr mil gya searched element),return next iterator (agr nhi mila to elementthen also) 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
}
auto itr=lower_bound(a,a+n,7);
    cout<<*itr;
    return 0;
}