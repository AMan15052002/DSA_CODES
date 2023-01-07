#include<iostream>
#include<deque>
using namespace std;
void show(deque<int> g){
    deque<int>:: iterator it;
    for(it=g.begin();it!=g.end();it++)
    {
        cout<<*it<<endl;

    }


}
int main()
{
    deque<int>g;
    g.push_back(10);
    g.push_back(56);
    g.push_back(30);
    cout<<"the deque list is:"<<endl;
    show(g);//function calling....
    
    cout<<"front element is :"<<endl;

    cout<<g.front()<<endl;
    cout<<g.size()<<endl;
    cout<<g.max_size()<<endl;
    

    return 0;
    


}