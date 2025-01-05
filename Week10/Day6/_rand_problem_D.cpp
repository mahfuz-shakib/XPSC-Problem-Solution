/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    int n, k;   cin >> n >> k;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    map<int,int>mp;
    mp[0]=1;
    int preSum=0, r=0, ans=0;
    while(r<n)
    {
        preSum += v[r];
        int previous = preSum - k;
        ans+=mp[previous];
        mp[preSum]++;
        r++;
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

