// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n; cin >> n;
    int a[n][n-1];
    map<int,int>m,k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            cin>>a[i][j];
            if(j==0)
            {
                k[a[i][j]]=i;
                m[a[i][j]]++;
            }
        }
    }
    int f,s;
    if(m.begin()->second > m.rbegin()->second)
    {
        f=m.begin()->first;
        s=m.rbegin()->first;
    }
    else 
    {
        f=m.rbegin()->first;
        s=m.begin()->first;
    }
    int i=k[s];
    cout<<f<<" ";
    for(int j=0;j<n-1;j++)
    {
        cout<<a[i][j]<<" ";
    }
}

signed main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0);

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   cout<<endl;
    }
    return 0;
}

