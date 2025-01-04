/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void Good_Bye_2024()
{
    int n, k; cin >> n >> k;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    int l=0,r=0,ans=0,s=0;
    while(r<n)
    {
        s+=v[r];
        while(s>=k)
        {
            if(s==k) ans++;
            s-=v[l];
            l++;
        }
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
        Good_Bye_2024();
        cout<<endl;
    }
    return 0;
}
