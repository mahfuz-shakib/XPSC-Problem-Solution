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
    for(auto & x:v) cin >> x;
    int ans=0;
    for(int i=31;i>=0;i--)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(v[j]>=(1<<i) && v[j]<(1<<(i+1))) c++;
        }
        ans+=c*(c-1)/2;
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

