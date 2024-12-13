/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n,m; cin >> n >>m;
    int l =max(0LL,n-m), r=m+n;
    int ans=0;
    for(int i=0;i<=32;i++)
    {
        int x=(1LL<<i), b=r/x;
        if(b%2) ans|=x;
        else if(l==0)
        {
            if(b) ans|=x;
        }
        else
        {
            int bb=l/x;
            if(b!=bb) ans|=x;
        }
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

