/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void Good_Bye_2024()
{
    int n; cin >> n;
    vector<int>v(n),pre(n),suf(n);
    for(auto &x:v) cin >> x;
    pre[0]=v[0], suf[n-1]=v[n-1];
    for(int i=1,j=n-2;i<=n,j>=0;i++,j--)
    {
        pre[i]=pre[i-1]+v[i];
        suf[j]=suf[j+1]+v[j];
    }
    int ans=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        ans=max(ans,__gcd(pre[i],suf[i+1]));
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
        Good_Bye_2024();    cout<<endl;
    }
    return 0;
}
