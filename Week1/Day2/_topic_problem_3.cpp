#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin>>n;
    set<pair<string,string>>s;
    string a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        s.insert({a,b});
    }
    cout<<s.size();
    return 0;
}