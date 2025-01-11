/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
int k, n;
vector<int>v;
bool ok(int dis)
{
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        while(j<n && v[i]+dis>v[j]) j++;
        if(j==n) break;
        cnt++;
        i=j-1;
    }
    return cnt>=k;
}
void January_2025()
{
    cin >> n >> k;
    v.resize(n);
    for(auto &x:v) cin >> x;

    int l=0, r=v[n-1]-v[0]+10;
    while(l+1<r)
    {
        int m = (l+r)/2;
        if(ok(m)) l=m;
        else r=m;
    }
    cout << l;

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

