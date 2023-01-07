#include<iostream>
#include<vector>
//#include<stack>
using namespace std;

struct Mystack
{
    vector<int>v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res=v.back();
        v.pop_back();
        return res;
    }
   
    int size()
    {
        return v.size();
    }
    int peek()
    {
        return v.back();
    }

    bool isempty()
    {
        return v.empty();
    }


};
int main()
{
    Mystack s;
    s.push(5);
    s.push(12);
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<" "<<endl;

}