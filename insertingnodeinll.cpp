#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};

void printlist(node *n){
    int count=0;
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
        count++;
    }

    cout<<"No of elements present in linedlist are :"<<count<< endl;
}
 node *push(node *head, int newdata){
    node * newnode=new node();
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
    return head;


}

int main(){
    node *head=NULL;
    head=push(head, 5);
    head=push(head, 7);
    printlist(head);

}
