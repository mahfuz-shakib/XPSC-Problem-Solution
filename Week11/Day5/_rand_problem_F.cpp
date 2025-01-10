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
   vector<int>v;
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
       int x; cin >> x;
       if(!mp[x])
       {
           v.push_back(x);
           mp[x]++;
       }
   }
   sort(v.begin(),v.end());
   int ans = INT_MIN;
   for(int i=0;i<v.size();i++)
   {
       auto it = lower_bound(v.begin(),v.end(),v[i]+n);
       int dis = it - v.begin() - i;
       ans = max(ans,dis);
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


