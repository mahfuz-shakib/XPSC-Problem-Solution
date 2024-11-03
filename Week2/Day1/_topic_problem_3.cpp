// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n;cin>>n;
    deque<int>dq(n), v;
    for(auto &i:dq)cin>>i;
    sort(dq.begin(),dq.end());
    int sz=max(n/2,(n+1)/2);
    while(sz--)
    {
        v.push_back(dq[0]);
        dq.pop_front();
    }
    for(int i=0;i<min(dq.size(),v.size());i++)
    {
        if(dq[i]==v[i]) continue;
        else
        {
            dq.pop_front();
            v.pop_front();
            i--;
        }
    }
    cout<<dq.size()+v.size();
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

