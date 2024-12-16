
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;  cin >> n;
    vector<int>v(n);
    int mx=0,mn;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        mx|=v[i];
        if(i==0) mn=v[i];
        else mn&=v[i];
    }
    cout << mx-mn;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy(); cout<<endl;
    }
    return 0;
}


