
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int p,q,r;    
    cin >> p >> q >> r;
    int a=0LL;
    for(int k=0; k<64; k++)
    {
        int x=0LL,y=0LL,z=0LL;
        int m = (1LL<<k);
        if((p>>k)&1) x=m;
        if((q>>k)&1) y=m;
        if((r>>k)&1) z=m;
        if((m|x)==(z+(m&y))) a=a|m;
    }
    if((a|p)==(r+(a&q))) cout<< a ;
    else cout<< -1 ;
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