// Functions->
// 1)*max_element()
// 2)next_permutation()
// 3)__builtin_popcount()
// 4)Binary_serach()
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int  ma=0;
    // int a[n];
    // for(int i=0;i<n;i++)
    // cin>>a[i];
    // ma=max(ma,a[i]);
    // }
// for(int i=0;i<n;i++)
// {if(a[i]>ma)
// ma=a[i];
// }    
// ma=*max_element(a,a+n);
// cout<<ma;
// string s="ABC";
// do{
//     cout<<s<<endl;
// }while(next_permutation(s.begin(),s.end()));
// int n;
// cin>>n;
// int ans=__builtin_popcount(n);//use to count the set bit;
// cout<<ans;
int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
if(binary_search(a,a+n,3)){
    cout<<"present";
}
else{
    cout<<"absent";
}
return 0;
}