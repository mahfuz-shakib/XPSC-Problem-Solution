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
    int ans=INT_MAX;
    for(int i=1;i<n-1;i++)
    {
        int x = abs(v[i]-v[i-1]);
        int y=abs(v[i]-v[i+1]);
        ans=min(ans,max(x,y));
    }
    int x=abs(v[0]-v[1]);
    int y=abs(v[n-1]-v[n-2]);
    ans=min(ans,min(x,y));
    cout << ans;
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


