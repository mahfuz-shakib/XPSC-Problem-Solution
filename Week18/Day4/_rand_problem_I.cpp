// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
void Try_Untill_Solve()
{
    int n; cin>>n;
    vector<double>v(n);
    double w=0;
    for(auto &i:v)
    {
        cin>>i;
        w+=i;
    }
    if(n<3)
    {
        cout<<-1;
        return;
    }
    sort(v.begin(),v.end());
    double aw=w/(n*2);
    if(v[n/2]>=aw)
    {
        int x = n*2*v[n/2]-w;
        cout<<x+1;
    }
    else cout<<0;
}
signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test;  cin>>test;
    while(test--)
    {
        Try_Untill_Solve();
        cout<<endl;
    }
    return 0;
}
