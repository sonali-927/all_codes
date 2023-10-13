// 1,2,3,4,5,6,7,8
// windows cans be:- 123 ,234,345,456,567,678
// window size=3
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int a[n]={4,5,6,3,1,4,8,5,7,6};
    int k=3;
    int sum=0;
    int maxSum=0;
    for(int i=0;i<k;i++){
        sum +=a[i];
    }
    maxSum=sum;
    int i=0;
    int j=k;
    while(j<n){
        sum -=a[i];
        sum +=a[j];
        i++;
        j++;
        maxSum=max(maxSum,sum);
    }
cout<<maxSum;
}
