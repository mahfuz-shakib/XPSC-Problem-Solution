/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin >> n;
    string s; cin >> s;
    int z=0,o=0,x;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1') o++;
        else z++;
    }
    x=min(z,o);
    if(x%2) cout <<"Zlatan";
    else cout <<"Ramos";
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

