#include<iostream>
using namespace std;


//basic element of linedlist
struct Node
{
    int data;
    Node *next;
};

void printlist(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }

}

int main()
{
    Node *head= new Node();
    Node *second= new Node();
    Node *third= new Node();


    head->data=5;
    head->next= second;

    second->data=9;
    second->next=third;

    third->data=4;
    third->next=NULL;

     printlist(head);


}