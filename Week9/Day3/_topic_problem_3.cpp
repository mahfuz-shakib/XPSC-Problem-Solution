
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    int red = n/a, blue = n/b;
    int lcm = a*(b/__gcd(a,b));
    int both = n/lcm;
    int ans = red*p + blue*q - both*(p+q) + both*max(p,q);
    cout << ans;
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}


