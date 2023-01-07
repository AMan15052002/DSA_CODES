//what is tree?
//unlike arrays , linked list , stack and queues this all are linear data structures 
//likewise trees are hierarchical data structures.
// Data Structures------>>1.linear ds    2. non linear ds
// linear data structures has following types :
//a) arrays b) stack c) queue d) linedlist

// Non linear data structures has following types :
//a) graphs      b)  trees...
// tree has following main words
//1. root  2.edge 3.key  4.siblings   5.subtree  6. leaf nodes 7.children
//8.parent  

//************************BINARY TREE IN C++*********************************


 //1.A tree whose element has atmost 2 children..
//2.Now, we name them , left child and right child...

// BINARY TREE REPRESENTATION..
//1) a tree is represented by a pointer to the topmost node in tree...
//2) if the tree is empty , then value of root is null..

// A Tree contains the following parts
//1) Data
//2) Pointer to left child 
//3) Pointer to right child..`
/*struct node 
{
    int data;
    struct node *left;
    struct node *right;

};*/ 

//key points:
//1. Tree is a hiearchical data structure.
//2. Main uses of trees include maintaininfg hierachical data.
//3. Binary trees are special cases of trees where every node has at most two children..
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;

};

node * newnode(int data)
{
    node *element=new node();
    element->data=data;
    element->left=NULL;
    element->right=NULL;
    return element;


}

void printnode(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->left;
    }

    cout<<endl;

}

int main()
{
    //making root node
    node *root=newnode(1);
    root->left=newnode (2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    printnode(root);

     
}