#include <iostream>
using namespace std;

// forward declaration:
// class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumcrealomplex(complex, complex);
};
class complex
{
    friend int calculator::sumcrealomplex(complex o1, complex o2);

    int a, b;

public:
    void setno(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printno()
    {
        cout << "ur number is:" << a << "+" << b << "i" << endl;
    }
    // friend complex sumcomplex(complex o1, complex o2);
};

int main()
{
    complex o1, o2;
    o1.setno(1, 4);
    o2.setno(5, 7);
}