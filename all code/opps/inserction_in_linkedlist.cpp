//Front
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
void insertAtFront(Node* &head,int val){
Node* newNode=new Node(val);
if(head ==NULL){
    head=newNode;
    return;
    }
    newNode->next=head;
    head=newNode;
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
    insertAtFront(head,1);
    insertAtFront(head,2);
    insertAtFront(head,3);
    display(head);
}