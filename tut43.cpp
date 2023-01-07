#include<iostream>
using namespace std;

class Base1
{
    public:
    void greet()
    {
        cout<<"m hoe r u??"<<endl;
    }

};


class Base2
{
    public:
    void greet()
    {
        cout<<"kaise ho ??"<<endl;
    }

};

class derived : public Base1, public Base2
{
    int a;
    public:
    void greet()
    {
        Base1:: greet();
    }



};


class B
{
    public:
    void say()
    {
        cout<<"Hello World!!!"<<endl;
    }

};

class D: public B
{
   int a;
   public:
   void say()
   {
    cout<<" gfg"<<endl;

   }
  

};
int main()
{
    //Base1 obj1;
    //Base2 obj2;

    //derived d;
    //d.greet();
    B b;
    b.say();
    D d;
    d.say();




    return 0;
}