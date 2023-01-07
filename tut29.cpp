#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    //construction is a special member function of class 
    complex(void);//declaration of constructor (complex)
    void printnumber()
    {
        cout<<"Your number is :"<<a<<"+"<<b<<"i"<<endl;
    }
    
       
    
};
complex :: complex(void)//definition of constructor complex and it takes no parameter therfore known as default constructors..

{
    a=10;
    b=0;
}
int main()
{
    complex c;
    c.printnumber();
    return 0;
}