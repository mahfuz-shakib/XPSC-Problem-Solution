/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    int n, t; cin >> n >> t;
    vector<int>v(n);
    for(auto &x:v) cin >> x;

    auto ok=[&](int s)
    {
        int cnt=0;
        for(auto x:v)
        {
            cnt += (s / x);
            if(cnt>=t) return true;
        }
        return cnt>=t;
    };
    int l = 1, r = 1e18, ans = 0;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
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


