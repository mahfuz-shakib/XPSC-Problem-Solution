// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n,k; cin >> n >> k;
    string s; cin>>s;
    int l=0,r=0;
    queue<char>d;
    int mn=INT_MAX;
    while(r<n)
    {
        if(s[r]=='W')
            d.push(s[r]);
        if(r-l+1==k)
        {
            int x=d.size();
            mn=min(x,mn);
            if(s[l]==d.front())
                d.pop();
            l++;
        }
        r++;
    }
    cout<<mn;
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

