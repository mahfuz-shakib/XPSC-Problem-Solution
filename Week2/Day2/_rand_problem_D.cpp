// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n; string s;
    cin>>n>>s;
    if(n!=5)
    {
        cout<<"NO";
        return;
    }
    map<char,int>mp;
    for(auto c:s)
    {
        mp[c]++;
    }
    if(mp['T']==1 && mp['i']==1 && mp['m']==1 && mp['u']==1  && mp['r']==1)
        cout<<"YES";
    else cout<<"NO";

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

