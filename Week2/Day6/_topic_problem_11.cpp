// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n,m,q; cin >> n >> m >> q;
    vector<int>p(m+1);
    for(int i=1;i<=m;i++)
    {
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    while(q--)
    {
        int d; cin>>d;
        if(d<p[1])
            cout<<p[1]-1<<endl;
        else if(d>p.back())
            cout<<n-p.back()<<endl;
        else
        {
            int index = upper_bound(p.begin()+1,p.end(),d)-p.begin();
            cout<<1+(p[index]-p[index-1]-2)/2<<endl;
        }
    }
}

signed main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0);

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   //cout<<endl;
    }
    return 0;
}

