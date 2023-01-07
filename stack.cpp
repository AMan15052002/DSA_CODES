#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> stack;
    stack.push(21);
    stack.push(24);
    //stack.pop();

    while(!stack.empty()){
        cout<<stack.top()<<endl;
        stack.pop();
    }
    return 0;
}