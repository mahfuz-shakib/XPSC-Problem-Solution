// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m; 
int a[202][202];
int s=0;
void value(int i, int j,int k,int l)
{
    i=i+k;
    j=j+l;
    if(i<0 || i==n || j<0 || j==m)
        return;
    s+=a[i][j];
    value(i,j,k,l);
}
void Try_To_Solve()
{
   cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            value(i,j,-1,-1);
            value(i,j,-1,1);
            value(i,j,1,-1);
            value(i,j,1,1);
            mx=max(mx,s+a[i][j]);
            s=0;
        }
    }
    cout<<mx;
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

