//PREORDER TRAVERSAL:(ROOT, LEFT, RIGHT)

#include<iostream>
using namespace std;
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }

};
void printkdist(Node *root, int k)
{
    if(root==NULL)
       return ;
    
    if(k==0)
    {
        cout<<root->key<<" ";
    }
    else
    {
        printkdist(root->left,k-1);
        printkdist(root->right, k-1);

    }


}
int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left= new Node(40);
    root->left->right=new Node(50);
    root->right->right=new Node(60);
    root->right->left=new Node(70);
    int k=2;
    printkdist(root, k);

    return 0;

}