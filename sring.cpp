#include<bits/stdc++.h>
using namespace std;
bool issubseq(string s1, string s2, int n, int m)
{
    int j=0;
    for(int i=0;i<n && i<m;i++)
    {
        if(s1[i]==s2[j])
        j++;
    }

    return j=m;
}






int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n,m;
    cin>>n>>m;
    cout<<issubseq(s1,s2,n,m);

    return 0;
}