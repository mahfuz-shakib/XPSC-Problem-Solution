// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n, x;cin>>n>>x;
    vector<int>v;
    while(n--)
    {
        int a; cin>>a;
        if(a!=x)v.push_back(a);
    }
    for(auto i:v)cout<<i<<" ";
}

signed main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0);

    int tc=1;
    //int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   cout<<endl;
    }
    return 0;
}

