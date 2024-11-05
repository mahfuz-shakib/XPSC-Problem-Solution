// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n; cin >> n;
    deque<int>d(n),v;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
        m[d[i]]=i+1;
        v.push_back(d[i]);
    }
    sort(v.begin(),v.end());
    while(d.size()>3)
    {
        if(d[0]==v[0] || d[0]==v.back())
        {
            if(d[0]==v[0]) v.pop_front();
            else v.pop_back();
            d.pop_front();
        }
        else if(d.back()==v[0] || d.back()==v.back())
        {
            if(d.back()==v[0]) v.pop_front();
            else v.pop_back();
            d.pop_back();
        }
        else break;
    }
    if(d.size()<=3) cout<<-1;
    else cout<<m[d.front()]<<" "<<m[d.back()];
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

