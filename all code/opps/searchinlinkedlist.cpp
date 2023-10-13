#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data =val;
        next=NULL;
    }
};
bool searchElement(Node* head,int item){
    Node* cur=head;
    while(cur){
        if(cur->data==item){
            return true;
        }
    }
    return false;
}
void display(Node* head){
    Node* cur =head;
    while(cur){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    display(head);
    cout<<searchElement(head,4)<<endl;
    return 0;
}

