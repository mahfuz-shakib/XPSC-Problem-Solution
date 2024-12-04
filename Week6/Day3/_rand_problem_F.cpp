#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        vector<long long>v,v2;
        for(int i=0; i<n; i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
        }
        long long h[n],pre[n];
        h[0]=v[0];
        pre[0]=v[0];
        for(int i=1; i<n; i++)
        {
            h[i]=max(h[i-1],v[i]);
            pre[i]=pre[i-1]+v[i];
        }

        for(int i=0;i<n;i++)
        {
            if(h[i]==pre[i]/2 && pre[i]%2==0) c++;
        }
        cout<<c<<endl;

    }
    return 0;
}

