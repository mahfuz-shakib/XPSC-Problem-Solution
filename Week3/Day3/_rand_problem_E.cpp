// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n,m,h; cin >> n >> m >> h;
    vector<int>e(n),p;
    for(auto &i:e)cin>>i;
    for(int i=0;i<m;i++)
    {
        int x; cin>>x;
        p.push_back(h*x);
    }
    sort(e.begin(),e.end(),greater<int>());
    sort(p.begin(),p.end(),greater<int>());
    int s=0;
    for(int i=0;i<min(n,m);i++)
    {
        s+=min(e[i],p[i]);
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

