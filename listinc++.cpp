#include<bits/stdc++.h>
using namespace std;
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it=g.begin();it!=g.end();it++){
        cout<<*it<<endl;
        cout<<'\n';
    }
}
int main()
{
    list<int> glist1, glist2;
    for(int i=0;i<3;i++){
        glist1.push_back(i*3);
        
        
    }
    cout<<"before popping :"<<endl;

    showlist(glist1);
    glist1.pop_back();
    glist1.emplace_back(45);
    //showlist(glist1);
    
    cout<<" after popping glist is :"<<endl;
    showlist(glist1);
    cout<<"Aman"<<endl;
    return 0;
}
