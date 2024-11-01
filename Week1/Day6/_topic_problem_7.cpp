// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    int n; cin >> n;
    map<string,int>mp;
    for(int i=1;i<=n;i++)
    {
        string s; cin >> s;
        if(mp[s]==0)
        {
            cout << "OK";
            mp[s]++;
        }
        else
        {
            string t = to_string(mp[s]);
            t=s+t;
            mp[s]++;
            mp[t]++;
            cout<<t;
        }
        cout<<endl;
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

