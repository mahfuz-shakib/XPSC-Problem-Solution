// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
/*      @author : Mahfuz_Shakib        */
void Try_To_Solve()
{
    int a,b,n,s;
    cin >> a >> b >> n >> s;
    int d=s-n*min(a,s/n);
    d<=b? cout<<"YES" : cout<<"NO";
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

