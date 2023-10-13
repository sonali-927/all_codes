#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data =val;
        next=Null;
    }
};
void display(Node* head){
while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
}
}
int main(){
    Node* head =NULL;
    insertFront(head,1);
    insertFront(head,2);
    insertFront(head,3);
    display(head);
}