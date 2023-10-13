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
void deleteFront(Node* &head){
    if(head==NULL)
return;
Node* cur=head;
head=cur->next;
delete cur;
}
void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node* head=NULL;
    deleteFront(head);
     display(head);

}