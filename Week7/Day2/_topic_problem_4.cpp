// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define int long long

void Try_To_Solve()
{
    int n; cin >> n;
    string s,t; cin >> s >> t;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(s[i]==t[i] && s[i]=='0')
            continue;
        if(s[i]=='1')
            flag=true;
        break;
    }
    (flag || s==t)? cout<<"YES" : cout<<"NO";
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   cout<<endl;
    }
    return 0;
}

