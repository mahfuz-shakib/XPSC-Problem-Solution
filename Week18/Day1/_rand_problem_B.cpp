// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    int n,k;
    cin>>n>>k;
    int l=n*(n+1)/2;
    int x =n-k;
    l=l-x*(x+1)/2;
    if(l%2==0)cout<<"YES";
    else cout<<"NO";
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
