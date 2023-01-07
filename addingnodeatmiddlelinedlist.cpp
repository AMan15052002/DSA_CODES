#include<iostream>
using namespace std;

//Traversing Of linedlist is o(n)---> iterative approach...

if(head==NULL){
    return ;
}


cout<<head->data;
printlist(head->next);
