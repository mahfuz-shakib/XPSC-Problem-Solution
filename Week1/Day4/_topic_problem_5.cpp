// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    map<string, int>mp;
    int n; cin>>n;
    vector<string>v[3];
    string s;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n; j++)
        {
            cin>>s;
            v[i].push_back(s);
            mp[s]++;
        }
    }
    int x=0;
    vector<int>pp;
    for(int i=0;i<3;i++)
    {
        for(auto s:v[i])
        {
            if(mp[s]==3) x+=0;
            if(mp[s]==1) x+=3;
            if(mp[s]==2) x+=1;
        }
        pp.push_back(x);
        x=0;
    }
    for(auto it:pp) cout<<it<<" ";
}

signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin>>test;
    while(test--)
    {
        Try_Untill_Solve();
        cout<<endl;
    }
    return 0;
}

