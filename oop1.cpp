#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;
    public:
    void setData(int v1, int v2)//arguments
    {
        a=v1;
        b=v2;
    } 

    void setDatabysum(complex o1, complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;

    }
    void printnumber()
    {
        cout<<"your complex no is"<<a<<"+i"<<b<<endl;
    }

};

int main()
{
    complex c1,c2,c3;  //objects of the complex class...
    c1.setData(1,2);
    c1.printnumber();

    
    c2.setData(3,4);
    c2.printnumber();




    return 0;
}