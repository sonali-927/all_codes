#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;

    }
};
void insertAtLast(Node* &head,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* cur=head;
    while(cur->next){
        cur =cur->next;

    }
    cur->next=newNode;
    return;
}
void display(Node* head){
    Node* cur=head;
    while(cur){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}
int main(){
Node* head=NULL;
insertAtLast(head,1);
insertAtLast(head,2);
insertAtLast(head,3);
insertAtLast(head,4);
display(head);
}