// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n; cin>>n;
    deque<int>d(n);
    for(auto &i:d)cin>>i;
    sort(d.begin(),d.end());
    int day=1;
    while(d.size())
    {
        if(d[0]>=day)
        {
            day++;
        }
        d.pop_front();
    }
    cout<<day-1;
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

