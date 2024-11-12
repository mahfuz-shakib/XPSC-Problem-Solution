// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int v=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')v+=i;
        else v+=n-1-i;
    }
    vector<int>a;
    for(int i=0,j=n-1;i<=j;i++,j--)
    {
        if(s[i]=='L')a.push_back(i+1);
        if(s[j]=='R')a.push_back(n-j);
    }
    sort(a.begin(),a.end());
    for(auto p:a)
    {
        v+=n+1-2*p;
        cout<<v<<" ";
    }
    int x=n-a.size();
    while(x--) 
    {
        cout<<v<<" ";
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

