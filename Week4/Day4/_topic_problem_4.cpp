// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n,s; cin >> n >> s;
    vector<int> v(n);
    for(auto &x:v) cin >> x;
    int l=0,r=0,a=0,ans=0;
    while(r<n)
    {
        a+=v[r];
        while(a>=s)
        {
            a-=v[l];
            l++;
        }
        ans+=l;
        r++;
    }
    cout << ans;
}
/* -  -  - Mahfuz Shakib -  -  - */
signed main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0);

    int tc=1;
    //int tc;  cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();   cout<<endl;
    }
    return 0;
}


