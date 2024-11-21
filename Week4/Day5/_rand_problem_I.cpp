/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin>>n;
    int x = n*(n-1)/2;
    vector<int>v(n),d(x);
    for(auto &x:d) cin >> x;
    sort(d.begin(),d.end());
    int j=0,k=2;
    for(int i=0;i<x;i++)
    {
        v[j]=d[i];
        i+=n-k;
        j++;
        k++;
    }
    v[n-1]=d.back();
    for(auto x:v) cout << x << " ";
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


