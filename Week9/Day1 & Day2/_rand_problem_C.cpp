/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n,k;    cin >> n >> k;
    int i=1, cnt=0;
    while(n--)
    {
        int x;  cin >> x;
        if(abs(x-i)%k) cnt++;
        i++;
    }
    if(cnt==0) cout << 0;
    else if (cnt==2) cout << 1;
    else cout << -1;
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


