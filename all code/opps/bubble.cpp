#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int  n=5;
    int a[n]={4,5,3,2,1};
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}