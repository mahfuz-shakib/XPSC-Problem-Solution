// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n;cin>>n;
    string s; cin>>s;
    int c=0;
    for(int i=0,j=s.size()-1;i<=j;i++,j--)
    {
        if(s[i]==s[j])break;
        c=c+2;
    }
    cout<<s.size()-c;
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

