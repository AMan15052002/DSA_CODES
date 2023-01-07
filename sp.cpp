#include<iostream>
using namespace std;
int main()
{
    cout<<"here we are printing the table of 7 by multiplying with i"<<"\n";
    for(int i=0;i<10;i++){
        int c=7;
        int A=c*i;
        cout<<A<<"\n";
    }
    int c=7;

    //optimize code
    cout<<"Optimize code"<<"\n"<<"\n";
    cout<<"By using the strength reduction technique we are printing 7 by adding 7 ten k times"<<"\n";
    int k=0;
    for(int i=0;i<10;i++){
        int A=k;
        k=k+c;
        cout<<A<<"\n";
    }

    return 0;
    
}
