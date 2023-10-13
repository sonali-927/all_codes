// vector functins:-
// 1)push_back()
// 2)pop_back()
// 3)size()
// 4)resize()
// 5)begin()
// 6)end()
// 7)clear()
// 8)empty()
// 9)erase()
// 10)insert()
// 11)reverse()
// 12)sort()
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
//     for(int i=0;i<vec.size();i++)
//     cout<<vec[i]<<" ";
// cout<<endl;
    cout<<vec.size()<<endl;
//     vec.pop_back();
//     for(int i=0;i<vec.size();i++)
//     cout<<vec[i]<<" ";
// cout<<endl;
// vec.resize(5);
// cout<<endl;
//  for(int i=0;i<vec.size();i++)
//     cout<<vec[i]<<" ";
// cout<<endl;
// cout<<*(vec.begin()+1)<<endl;
// vec.clear();
// cout<<vec.size()<<endl;
// if(vec.empty()){
//     cout<<"empty"<<endl;
// }
// else cout<<"not empty";
vec.erase(vec.begin()+1);
 for(int i=0;i<vec.size();i++){
     cout<<vec[i]<<" ";
     
 }
 cout<<endl;
vec.insert(vec.begin()+1,8);
for(int i=0;i<vec.size();i++){
     cout<<vec[i]<<" ";}
     cout<<endl;
     reverse(vec.begin(),vec.end());
     for(int i=0;i<vec.size();i++){
     cout<<vec[i]<<" ";
     }
     cout<<endl;
     sort(vec.begin(),vec.end());
     for(int i=0;i<vec.size();i++){
     cout<<vec[i]<<" ";
     }
     cout<<endl;
    return 0;
}