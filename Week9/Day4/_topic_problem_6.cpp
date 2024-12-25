/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void Good_Bye_2024()
{
    int a,b;    cin >> a >> b;
    int ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=((ans%Mod)*(a%Mod))%Mod;
        }
        b=(b>>1);
        a = a*a%Mod;
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
        Good_Bye_2024();
        cout<<endl;
    }
    return 0;
}

