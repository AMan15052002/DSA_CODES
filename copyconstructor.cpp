#include<iostream>
using namespace std;

class complex
{
public:
   int a,b;


public:
    complex(int x, int y)
    {
        a=x;
        b=y;    

    }

    complex(int x)
    {
        a=x;
    }

    complex()  //default constructor...
    {

    }

    complex(complex &c1)//refernce pass iya c1 ka
    {
        a=c1.a;
        b=c1.b;

    }

};





int main()
{
    complex c1(2,3);
    complex c2(c1); //***** copy c1 into c2

    cout<<c2.a<<" "<<c2.b<<endl;

}