/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    string s,t; cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        v[i]--;
    }
    auto ok = [&](int del)
    {
        vector<bool>bad(n);
        for(int i=0;i<=del;i++)
            bad[v[i]]=true;
        int j=0;
        for(int i=0;i<n;i++)
        {
           if(!bad[i] && s[i]==t[j]) j++;
           if(j==m) return true;
        }
        return false;
    };
    int l=0,r=n-1,ans=0;
    bool flag = false;
    while(l<=r)
    {
        int m = l + (r-l)/2;
        if(ok(m))
        {
            ans = m;
            l = m + 1;
            flag = true;
        }
        else r = m - 1;
    }
    if(flag) ans++;
    cout << ans;
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        January_2025();
        cout<<endl;
    }
    return 0;
}


