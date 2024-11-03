// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n,m;cin>>n>>m;
    vector<int>v(n),a;
    set<int>s;
    for(auto &i:v)cin>>i;
    while(v.size())
    {
       s.insert(v.back());
       a.push_back(s.size());
       v.pop_back();
    }
    reverse(a.begin(),a.end());
    while(m--)
    {
        int x; cin>>x;
        cout<<a[x-1]<<endl;
    }

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

