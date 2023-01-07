#include<iostream>
using namespace std;
class complex
{
private:
  int a,b;

public:
   complex(int x, int y)
   {
    a=x;
    b=y;


   }
   
   



}; 

class box
{
public:
   int a;

   box(int x)
   {
    a=x;
   }

   
};
int main()
{
    //complex c1(5,9);// object of class
    complex c2(5,9);
    box b1(9);


    return 0;
}