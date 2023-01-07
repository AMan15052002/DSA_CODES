#include <iostream>
using namespace std;

// destructor never takes aragument and do not return any value!!
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "Tihs is the time when constructor is called for object number" << count << endl;
    }

    ~num() // destructor...
    {
        cout << "Tihs is the time when desstructor is called for object" << count << endl;
        count--;
    }
};
int main()
{
    cout << "we r inside the main function" << endl;
    cout << "creating first objects n1"<<endl;

    num n1;//object of class num
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        //cout<<"exiting the block"<<endl;
        //cout<<"creating two more objects"<<endl;
        //num n2,n3;
        cout<<"exiting the block"<<endl;

    }

    cout<<"Back to main "<<endl;


    return 0;
}
