#include<iostream>
#include<queue>
using namespace std;
void show (priority_queue<int> pq){
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();

    }
}
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(5);
    pq.push(50);
    cout<<" The priority queue is :"<<endl;
    show(pq);
}