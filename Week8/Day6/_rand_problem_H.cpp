/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n,k;    cin>>n>>k;
    vector<int>v(n),s;
    for(auto &x:v) cin >> x;
    s=v;
    sort(s.begin(),s.end());
    int i;
    for(i=0; i<n; i++)  if(s[i]!=i) break;
    v.push_back(i);
    n=v.size();
    k%=n;
    for(int i=n-k; i<n; i++)    cout<<v[i]<<" ";
    for(int i=0; i<n-k-1; i++)  cout<<v[i]<<" ";
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

