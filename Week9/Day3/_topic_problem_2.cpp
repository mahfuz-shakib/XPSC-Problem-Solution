
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin >> n;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    int g1=0,g2=0,ans=0;
    bool  flag=true;
    for(int i=0;i<n;i+=2) g1=__gcd(g1,v[i]);
    for(int i=1;i<n;i+=2)
    {
        if(v[i]%g1==0)
        {
            flag=false; break;
        }
    }
    if(flag) ans=g1;
    else
    {
        flag=true;
        for(int i=1;i<n;i+=2) g2=__gcd(g2,v[i]);
        for(int i=0;i<n;i+=2)
        {
            if(v[i]%g2==0)
            {
                flag=false; break;
            }
        }
        if(flag) ans=g2;
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
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}

