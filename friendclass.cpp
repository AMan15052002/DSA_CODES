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

class calculator
{
    public:
      int add(int a, int b)
      {
        return (a+b);
      }

      int sumcomplex(complex o1,complex o2)
      {
        return o1.a+o2.a;
      }

};