/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
vector<int>v;
bool good(int m)
{
    multiset<int>s;
    for(auto a:v) s.insert(a);
    for(int i=1;i<=m;i++)
    {
        if(s.empty()) return false;
        int k = m - i + 1;
        auto it = s.upper_bound(k);
        if(it==s.begin()) return false;
        it--;
        s.erase(it);
        if(!s.empty())
        {
            int x = *s.begin();
            s.erase(s.begin());
            s.insert(x+k);
        }
    }
    return true;
}
void January_2025()
{
    int n; cin >> n;
    v.resize(n);
    for(auto &x:v) cin >> x;
    int l=0,r=n,ans=0;
    while(l<=r)
    {
        int m = (l+r)/2;
        if(good(m))
        {
            ans = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    cout << ans;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        January_2025();
        cout<<endl;
    }
    return 0;
}

