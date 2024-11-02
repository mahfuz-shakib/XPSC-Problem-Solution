// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    int n; cin >> n; 
    map<string,int>mp;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s; cin>>s;
        v.push_back(s);
    }
    while(v.size())
    {
        if(mp[v.back()]==0)
        {
            mp[v.back()]++;
            cout<<v.back()<<endl;
        }
        v.pop_back();
    }
}
signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test=1;
    //cin>>test;
    while(test--)
    {
        Try_Untill_Solve();
        cout<<endl;
    }
    return 0;
}

