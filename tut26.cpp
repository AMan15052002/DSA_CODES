
#include<iostream>
using namespace std;
class complex
{
    
    int a,b;
    public:
    void setno(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    void printno()
    {
        cout<<"ur number is:"<<a<<"+"<<b<<"i"<<endl;
    }
   friend complex sumcomplex(complex o1, complex o2);
};



complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setno((o1.a+o2.a),(o1.b+o2.b));

}


int main()
{
    complex c1,c2;// two objects 
    c1.setno(45,56);
    c1.printno();
    c2.setno(1213,454);
    
    c2.printno();

    return 0;


}