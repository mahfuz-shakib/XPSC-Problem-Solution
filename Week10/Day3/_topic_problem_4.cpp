/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void Good_Bye_2024()
{
    int n, q; cin >> n >> q;
    vector<int>v(n), p(n);
    for(auto &x: v) cin >> x;
    sort(v.begin(),v.end(),greater<int>());
    p[0]=v[0];
    for(int i=1;i<n;i++)
    {
        p[i] = p[i-1]+v[i];
    }
    while(q--)
    {
        int x; cin >> x;
        int l=0,r=n-1,ans=0;
        if(x<=p[0]) ans = 1;
        else if(x>p.back())ans=-1;
        else
        {
            while(l<=r)
            {
                int m = (l+r)/2;
                if(p[m]>=x)
                {
                    ans=m;
                    r=m-1;
                }
                else l = m + 1;
            }
            ans++;
        }
        cout << ans <<endl;
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        Good_Bye_2024();
        cout<<endl;
    }
    return 0;
}

