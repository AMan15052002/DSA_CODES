#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *left, *right;
};

node * newnode(int data)
{
    node *Node=new node();
    Node->data=data;
    Node->left=NULL;
    Node->right= NULL;

    return (Node);

}

int main()
{
    node *root=newnode(1);
    root->left=newnode(2);
    root->right= newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);

    cout<<" Level order traversal of binary tree is"<<endl;

    return 0;

}