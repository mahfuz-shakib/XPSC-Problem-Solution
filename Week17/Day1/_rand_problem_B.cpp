#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,z=0,o=0;
        cin>>n;
        string s,f;
        cin>>s>>f;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0' && f[i]!='0')
                z++;
            else if(s[i]=='1' && f[i]!='1')
                o++;
        }
        if(z>=o)
            cout<<z<<endl;
        else
            cout<<o<<endl;

    }
}
