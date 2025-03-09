#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,x,b,c;
        cin>>n;
        vector<long long int>v1,v2,v4;
        long long int v3[n]= {0},i=0;
        long long int m=n;
        while(n)
        {
            cin>>a>>x;
            if(a==1)
                v1.push_back(x);
            else if(a==2)
                v2.push_back(x);
            else
            {
                v3[i]=x;
                i++;
            }
            n--;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3,v3+m);
        c=v1.back();
        b=v2.front();
        x=0;
        for(i=0; i<m; i++)
        {
            if(v3[i]>=c && v3[i]<=b)
            {
                x++;
            }
        }
        n=b-c+1-x;
        if(n>=0)
            cout<<n<<endl;
        else
            cout<<0<<endl;
    }
}
