#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;

        if(k==0)
        {
            for(int i=n; i>0;i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            int x;
            x=n-k;
            for(int i=x; i<=n;i++)
            {
                cout<<i<<" ";
            }
            for(int i=x-1; i>0;i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }

    }
}
