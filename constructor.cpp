//1.it is a special type of function
//2. Its name is same as it name of class...
//3. It has not any return type..
//4. It must be instance member function not statics...







#include<iostream>
using namespace std;

class box
{
public:
    int length;
    int breadth;

    box() // this is constructor....
    {
        cout<<"constructor is excecuteds"<<endl;
    }



};

class student
{
public:
   int std;
   int age;
   int roll;

   student()
   {
     std=5;
   }

   


};
int main()
{
     box b1;
     student s1;
     //s1.std=8;
     s1.roll=22;
     s1.age=8;

     cout<<s1.std<<" "<<s1.roll<<" "<<s1.age<<" "<<endl;

}
