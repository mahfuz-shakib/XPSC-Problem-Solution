// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n; cin>>n;
    vector<int>p(n), z,o;
    map<int,int>m;
    for(auto &v:p)cin>>v;
    string s; cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')z.push_back(p[i]);
        else o.push_back(p[i]);
    }
    sort(z.begin(),z.end());
    sort(o.begin(),o.end());
    for(auto v:o) z.push_back(v);
    int x=1;
    for(auto v:z)
    {
        m[v]=x;
        x++;
    }
    for(auto v:p)cout<<m[v]<<" ";
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