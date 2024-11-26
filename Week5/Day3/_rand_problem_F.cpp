/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin >> n;
    int x = n/2;
    if(n%2) x = 1 + n/2;
    cout << x << endl;
    int l=1, r=3*n-1;
    while(l<r)
    {
        cout << l <<" "<< r <<endl;
        l+=3; r-=3;
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();   //cout<<endl;
    }
    return 0;
}



