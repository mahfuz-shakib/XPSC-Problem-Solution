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
    int cnt=0, flag=1;
    for(int i=n-2;i>=0;i--)
    {
        if(v[i+1]==0)
        {
            flag=0;
            break;
        }
        while(v[i]>=v[i+1])
        {
            v[i]/=2;
            cnt++;
        }
    }
    flag? cout << cnt : cout << -1;
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



