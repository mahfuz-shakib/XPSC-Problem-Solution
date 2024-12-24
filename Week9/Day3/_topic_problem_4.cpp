
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
bool prime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0) return false;
    }
    return true;
}
signed main()
{
    Mahfuz_Shakib

    int n;  cin >> n;
    int ans;
    if( prime(n) ) ans = 1;
    else if( n%2==0 || prime(n-2) ) ans = 2;
    else ans = 3;
    cout << ans << endl;

    return 0;
}



