// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    string s,t; cin >> s >> t;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])c++;
    }
    cout<<c;
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

