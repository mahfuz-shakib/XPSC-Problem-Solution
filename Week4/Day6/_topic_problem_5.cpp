/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    map<int,int>m;
    int l=0,r=0,ans=0;
    while(r<n)
    {
         m[v[r]]++;
        while(m.size()>k)
        {
            m[v[l]]--;
            if(m[v[l]]==0)m.erase(v[l]);
            l++;
        }
        ans+=r-l+1;
        r++;
    }
    cout<<ans;
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc;  cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}

