// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n,k;  cin >> n >> k;
    string s; cin >> s;
    map<char,int> m;
    for(auto c:s) m[c]++;
    int cnt = 0;
    for(auto [c,x]:m) if(x%2) cnt++;
    
    k>=cnt-1? cout<<"YES" : cout<<"NO";
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

