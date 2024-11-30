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
    int x = v[0];
    for(int i=1;i<n;i++)
    {
        x=x^v[i];
    }
    int ans = x^v[0];
    for(int i=1;i<n;i++)
    {
        ans ^= (x^v[i]);
    }
    if(ans==0) cout << x;
    else cout << -1;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();   cout<<endl;
    }
    return 0;
}




