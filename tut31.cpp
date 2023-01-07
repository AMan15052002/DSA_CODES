#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a=x;
        b=0;
    }

    void printdata()
    {
        cout << "ur no is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(41, 4);
    c1.printdata();
    complex c2(5);
    c2.printdata();
    return 0;
}// this is constructor overloading....