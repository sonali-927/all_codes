#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int noofwords=0;
    int noofcharacters=0;
    int noofalphabets=0;
    int len =s.length();
    for(int i=0;i<len;i++){
        if(s[i] == ' '){
            noofwords++;
        }
        else{
            noofalphabets++;
        }
        noofcharacters++;
    }
    cout<<noofwords<<endl;
    cout<<noofcharacters<<endl;
    cout<<noofalphabets<<endl;
}