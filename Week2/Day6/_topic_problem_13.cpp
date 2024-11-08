// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n,m; cin>>n>>m;
    string s,t; cin>>s;
    set<int>x;
    while(m--)
    {
        int v; cin>>v;
        v--;
        x.insert(v);
    }
    cin>>t;
    sort(t.begin(),t.end());
    int j=0;
    for(auto i:x)
    {
        s[i]=t[j];
        j++;
    }
    cout<<s;
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

