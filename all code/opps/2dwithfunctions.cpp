#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int arr[][3]){
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";}
    cout<<endl;}
}

int main(){
    int arr[3][3];
    // int arr[2][2]={{1,2},{3,4}}; static
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
solve(arr);
return 0;
}