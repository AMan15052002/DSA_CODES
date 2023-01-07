#include<iostream>
using namespace std;
class base{
    int x;//data
public:
  void setx(int a){     //member function 1
    x=a;
  }
  int getx(){           //member function 2
    return x;     
  }
//base=data+member functions!!
};

int main()
{
    base b;
    b.x=20;
    cout<<b.x<<endl;
    return 0;
}