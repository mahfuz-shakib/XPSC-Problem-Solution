/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    int n;   cin >> n;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    map<int,int>mp;
    mp[0]=1;
    int sum=0, r=0, ans=0;
    while(r<n)
    {
        sum += v[r];
        int rem = sum % n;
        if(rem<0) rem += n;
        if(mp.find(rem)!=mp.end()) ans += mp[rem];
        mp[rem]++;
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


