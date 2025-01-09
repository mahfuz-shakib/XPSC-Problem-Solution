/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    int n,k; cin >> n >> k;
    auto ok = [&](int mid)
    {
        return (mid-(mid/n))>=k;
    };
    int l=1,r=2e9,ans;
    while(l<=r)
    {
        int m = l + (r-l)/2;
        if(ok(m))
        {
            ans = m;
            r = m - 1;
        }
        else l = m + 1;
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



