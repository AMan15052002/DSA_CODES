#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
      return 1;
    
    int abc=sum(n-1);

    return (n+abc);
}
int main()
{
    int n;
    cout<<"enter the value of n:"; 

    cin>>n;
    cout<<sum(n);
}
