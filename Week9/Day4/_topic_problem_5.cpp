/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
       ans=((ans%Mod)*(i%Mod))%Mod;
    }
    return ans;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        int n;  cin >> n;
        cout << fact(n)<<endl;
    }
    return 0;
}


