#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d=0;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<n;i++)
        {
           if(c[i]==a[i] || c[i]==b[i])
            {
                d++;
            }
        }
        if(d==n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

