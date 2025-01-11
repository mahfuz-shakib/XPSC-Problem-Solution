/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
int n,x;
vector<int>v;
bool ok(int h)
{
    int water=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<h) water+=(h-v[i]);
    }
    return water<=x;
}
void January_2025()
{
    cin >> n >> x;
    v.resize(n);
    for(auto &y:v) cin >> y;
    int l=1, r=1e10;
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

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        January_2025();
        cout<<endl;
    }
    return 0;
}

