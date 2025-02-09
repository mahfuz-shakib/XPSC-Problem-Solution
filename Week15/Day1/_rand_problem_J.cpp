#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    char c,i;
    for(int j=1; j<=t; j++)
    {
        cin>>s;
        for(i='1'; i<='8'; i++)
        {
            if(s[1]!=i)
            {
                cout<<s[0]<<i<<endl;
            }
        }
        for(i='a'; i<='h'; i++)
        {
            if(s[0]!=i)
            {
                cout<<i<<s[1]<<endl;
            }
        }
    }
}
