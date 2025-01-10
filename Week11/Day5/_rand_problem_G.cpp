/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
   int n; cin >> n;
   vector<int>v(n);
   for(auto &x:v) cin >> x;
   map<tuple<int,int,int>,int>mp;
   int ans=0;
   for(int i=0;i<n-2;i++)
   {
       int x = mp[{v[i],v[i+1],-1}];
       int y = mp[{v[i],-1,v[i+2]}];
       int z = mp[{-1,v[i+1],v[i+2]}];
       int p = mp[{v[i],v[i+1],v[i+2]}];

       ans += (x+y+z)-3*p;

       mp[{v[i],v[i+1],-1}]++;
       mp[{v[i],-1,v[i+2]}]++;
       mp[{-1,v[i+1],v[i+2]}]++;
       mp[{v[i],v[i+1],v[i+2]}]++;
   }
   cout << ans;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        January_2025();
        cout<<endl;
    }
    return 0;
}



