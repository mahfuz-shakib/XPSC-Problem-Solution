// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    int n; cin >> n; 
    string s,t; cin>>s;
    map<char, char>a;
    set<char>u;
    for(auto i:s)u.insert(i);
    for(auto i:u)t.push_back(i);
    for(int i=0, j=t.size()-1;i<=j;i++,j--)
    {
        a[t[i]]=t[j];
        a[t[j]]=t[i];
    }
    for(auto c:s)
    {
        cout<<a[c];
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

