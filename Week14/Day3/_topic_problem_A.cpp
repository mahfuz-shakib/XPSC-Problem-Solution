/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define b begin()
#define e end()
#define rb rbegin()
#define re rend()
#define yes cout<<"YES"
#define no cout<<"NO"
#define minus1; { cout<<-1; return; }
#define zero; { cout<<0; return; }
#define nl cout<<endl
#define int long long
const int Mod=1e9+7;
void solution()
{
    int n,q;  cin >> n >> q;
    vector<int>v(n), d(n+1,0);
    for(auto &x:v) cin >> x;
    while(q--)
    {
        int l,r; cin >> l >> r;
        l--;
        d[l]++; d[r]--;
    }
    d.pop_back();
    sort(v.rbegin(),v.rend());
    int ans = 0;
    for(int i=1;i<=n;i++) d[i]=d[i-1]+d[i];
    sort(d.rbegin(),d.rend());
    for(int i=0;i<n;i++) ans+=v[i]*d[i];
    cout << ans;
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        solution(); nl;
    }
    return 0;
}

