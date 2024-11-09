// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int q; cin>>q;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ms;
    vector<int>order;
    int sq=1; //sequence
    while(q--)
    {
        int query;
        cin>>query;
        if(query==1)
        {
            int tk; cin>>tk;
            s.insert({sq,tk});
            ms.insert({tk,-sq});
            sq++;
        }
        else if(query==2)
        {
            int pos=s.begin()->first;
            int taka=s.begin()->second;
            order.push_back(pos);
            s.erase(s.begin());
            ms.erase({taka,-pos});
        }
        else
        {
            int taka=ms.rbegin()->first;
            int pos=ms.rbegin()->second;
            order.push_back(-pos);
            s.erase({-pos,taka});
            ms.erase(--ms.end());
        }
    }
    for(auto x:order)cout<<x<<" ";
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

