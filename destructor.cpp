//1.it is a special member function...
//2. it has name as same of class but with a(~) symbol..
//3. It has no return type.
//4. It does not pass any arguments...
//5. It has no return type...

#include<iostream>
using namespace std;
class complex
{
public:
    int a, b;
    complex()// constructor...
    {
        cout<<"CONSTRUCTOR"<<endl;

    }
    ~complex()//destructor
    {
        cout<<" DESTRUCTOR"<<endl;
    }

    void set_data(int x, int y)
    {
        a=x;
        b=y;
    }

    void show_data()
    {
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;
        
    }

    


};


class box
    {
    public:
      int a;
       
       ~box()
       {
        cout<<" BOX"<<endl;
       }
    };

int main()
{
    complex c1;
    c1.set_data(5,6);
    c1.show_data();

    complex c2;

    box b1;

    

}