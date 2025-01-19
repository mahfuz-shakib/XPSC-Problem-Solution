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

signed main()
{
    Mahfuz_Shakib
    int n; cin >> n;
    vector<int>v(n+1,0);
    for(int i=2;i<=n;i++)
    {
        if(!v[i])
        {
            for(int j=i;j<=n;j+=i)
            {
                v[j]++;
            }
        }
    }
    int ans=0;
    for(int i=2;i<=n;i++)
    {
        if(v[i]==2) ans++;
    }
    cout << ans;
    return 0;
}


