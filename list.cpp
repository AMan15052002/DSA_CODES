#include<iostream>
#include<iterator>
#include<list>
using namespace std;
void showlist(list<int> glist1){
    list<int>:: iterator it;
    for(it=glist1.begin();it!=glist1.end();it++){
        cout<<'\t'<<*it<<endl;
    }
}
int main()
{
    list<int> glist1, glist2;
    for(int i=0;i<10;i++){
        glist1.push_back(i*2);
        glist2.push_back(i*3);

    }
    cout<<"glist1 is : ";
    showlist(glist1);
    cout<<"glist2 is :";
    showlist(glist2);
    cout<<glist1.front()<<endl;
    cout<<glist1.back()<<endl;


}