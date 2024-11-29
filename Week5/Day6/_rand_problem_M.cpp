
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;  cin >> n;
    int a[n], m=INT_MIN;
    map<int,int>mp;
    for(auto &x:a)
    {
        cin >> x;
        mp[x]++;
        m = max(m,mp[x]);
    }
    int x,op=0;
    while(m<n)
    {
        x = min(m,n-m);
        op+=x+1;
        m+=x;
    }
    cout << op;
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


