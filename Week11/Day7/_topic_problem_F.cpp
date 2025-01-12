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
    int l = k, r = n + k - 1;
    int x = r * (r + 1) / 2;
    int y = (k - 1) * k / 2;
    int ans = INT_MAX;
    while(l<=r)
    {
        int m = (l+r)/2;
        int z = m*(m+1)/2;
        if( (z-y) >= (x-z) ) r = m - 1;
        else l = m + 1;
        ans = min(ans, abs((z-y)-(x-z)));
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


