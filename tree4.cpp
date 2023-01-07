#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};

node *newnode(int data)
{
    node *temp=new node();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void print_inorder(node *node)
{
    if(node==NULL)
      return ;

    print_inorder(node->left);

    cout<<node->data<<" ";

    print_inorder(node->right);

    

}
int main()
{
    node * root=newnode(1);
    root->left= newnode(2);
    root->right=newnode(3);
    root->left->right=newnode(4);
    root->left->right=newnode(5);
    cout<<"Inorder Traversal of tree :"<<endl;
    print_inorder(root);

}