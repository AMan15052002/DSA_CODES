#include<bits/stdc++.h>
using namespace std;
void reversewords(string str)
{
    stack<char> st;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
        {
            st.push(str[i]);
        }

        else
        {
            while(st.empty()==false)
            {
                cout<<st.top();
                st.pop();

            }
            cout<<" ";

        }
        
    }



}




int main()
{
    string str= "Geek ";
    reversewords(str);
    return 0;
}