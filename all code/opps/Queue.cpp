#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int qu[5]={0};
    int size=0;
    int front =0;
    int rear =0;
    int capacity =5;
    bool isfull(){
        if(size == capacity)
        return true;
    else return false;
    }
    bool isEmpty(){
        if(size ==0)
        return true;
else return false;
    }
    void enque(int data){
        if(isFull()){
            cout<<"queue is full"<<endl;
            return ;
        }
        qu[rear]=data;
        rear=(rear +1)%capacity;
        size++;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        int item =qu[front];
        front =(front +1)%capacity;
        size--;
        cout<<item<<endl;
    }
    void display(){
        if(size ==0){
            cout<<"queue is empty"<<endl;
            return ;
        }
        for(int  i=front;i=rear;i++){
            if(i== capacity){
                i=-1;
                continue;
            }
            cout<<qu[i]<<" ";
        }
        cout<<endl;
    }
    int main(){


    }
}