/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;  cin>>n;
    map<char,int> a,b;
    map<string,int> c;
    int ans=0;
    while(n--)
    {
        string s;   cin>>s;
        ans+=(a[s[0]]-c[s]);
        ans+=(b[s[1]]-c[s]);
        a[s[0]]++;
        b[s[1]]++;
        c[s]++;
    }
    cout << ans;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}

