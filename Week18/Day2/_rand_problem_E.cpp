// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    if(x>=y)
    {
        if(n%y==0) cout<<n/y;
        else cout<<1+n/y;
    }
    else
    {
        if(n%x==0) cout<<n/x;
        else cout<<1+n/x;
    }
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
