#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }

};

struct mystack
{
    Node *head;
    int sze;
    mystack()
    {
        head=NULL;
        sze=0;
    }

    void push(int x)
    {
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
        sze++;

    }

    int pop()
    {
        if(head==NULL)
          return INT_MAX;

        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        sze--;
        return sze;

    }

    int size()
    {
        return sze;
    }

    bool isempty()
    {
        return head=NULL;
    }


};
int main()
{

    mystack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    //cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;
  
    return 0; 


}