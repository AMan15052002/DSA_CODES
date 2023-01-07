#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << " your result is here :" << endl;
        cout << " maths :" << maths << endl;
        cout << " physics :" << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void get_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << " your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << " score is :" << endl;
    }
};

int main()
{
     Result harry;
     harry.set_number(78);
     harry.set_marks(75.55,86.36);
    return 0;
}