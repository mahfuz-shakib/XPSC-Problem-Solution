
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void Good_Bye_2024()
{
    int n, q;
    cin >> n;
    vector<int>v(n);
    for(auto &x: v) cin >> x;
    sort(v.begin(),v.end());
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        int ans;
        if(x<v[0]) ans = 0;
        else if(x>v.back()) ans = n;
        else
        {
            int l=0,r=n-1;
            while(l<=r)
            {
                int m = (l+r)/2;
                if(v[m]<=x)
                {
                    l = m + 1;
                    ans = l;
                }
                else r = m - 1;
            }
        }
        cout << ans <<endl;
    }
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        Good_Bye_2024();
        //cout<<endl;
    }
    return 0;
}


