#include<iostream>
using namespace std;
class complex
{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2);
    public:
      void stnumber(int n1, int n2)
      {
        a=n1;
        b=n2;
      }
    void print_no()
    {
        cout<<"your number is:"<<a<<"+"<<b<<"i"<<endl;
    }

    


};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.stnumber((o1.a+o2.a),(o1.b+o2.b));

    return o3;


}

int main()
{
    complex c1,c2,sum;
    c1.stnumber(1,4);
    c2.stnumber(5,6);
    c1.print_no();
    c2.print_no();

    sum=sumcomplex(c1,c2);
    sum.print_no();




    return 0;
}
