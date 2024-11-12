// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n; cin >> n;
    vector<string>a;
    map<string,int>m;
    for(int i=0;i<n;i++)
    {
        string s; cin>>s;
        a.push_back(s);
    }
    while(a.size())
    {
        string s=a.back();
        if(m[s]==0)
        {
            m[s]=1;
            cout<<s[s.size()-2]<<*s.rbegin();
        }
        a.pop_back();
    }
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

