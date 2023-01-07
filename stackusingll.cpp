#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;

};

Node *top;

void push(int data)
{
    Node *temp=new Node();
    if(!temp){
        cout<<"Stack Overflow"<<endl;
        exit(1);
    }
    temp->data= data;
    temp->next=top;
    top=temp;
}

int isempty(){
    return top==NULL;
}
