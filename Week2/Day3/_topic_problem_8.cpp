// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n; cin>>n;
    int p, res=0;
    priority_queue<int>pq;
    while(n--)
    {
        cin>>p;
        if(p==0 && !pq.empty())
        {
            res+=pq.top();
            pq.pop();
        }
        else pq.push(p);
    }
    cout<<res;
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

