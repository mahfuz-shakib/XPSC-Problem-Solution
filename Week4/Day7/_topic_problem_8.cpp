
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n, k;
    cin >> n >> k;
    vector<int>v(n),d(n);
    for(auto &x:v) cin >> x;
    for(auto &x:d) cin >> x;
    int l=0,r=0,s=0,ans=INT_MIN;
    while(r<n)
    {
        s+=v[r];
        while(s>k || ( l<r && d[r-1]%d[r]))
        {
            s-=v[l];
            l++;
        }
        ans = max(ans, r-l+1);
        r++;
    }
    cout << ans;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;     cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}

