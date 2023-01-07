#include <iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    //construction is a special member function of class 
    complex(int ,int);//declaration of constructor (complex)
    void printnumber()
    {
        cout<<"Your number is :"<<a<<"+"<<b<<"i"<<endl;
    }
};

complex::complex(int x, int y)//this is a paramaterized constructor..

{
    a=x;
    b=y;
}

int main()
{
    complex a(4,52); //implict call
    a.printnumber();
    return 0;
}