/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    int n, k; cin >> n >> k;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    sort(v.begin(),v.end());
    auto ok=[&](int m)
    {
        int cnt=0;
        for(int i=n/2;i<n;i++)
        {
            cnt += (v[i]<m ? m-v[i]:0);
        }
        return cnt<=k;
    };
    int l = 1, r = 2e9, ans = 0;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
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


