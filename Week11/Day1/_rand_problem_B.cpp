
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n), c;
    for(auto &x:a)  cin >> x;
    for(auto &x:b)  cin >> x;
    c = a ;
    sort(c.begin(),c.end());
    sort(b.begin(),b.end());
    map<int, deque<int>>mp;
    for(int i=0;i<n;i++)
    {
       mp[c[i]].push_back(b[i]);
    }
    for(auto x:a)
    {
        cout << mp[x][0]<<" ";
        mp[x].pop_front();
    }
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


