/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define b begin()
#define e end()
#define rb rbegin()
#define re rend()
#define yes cout<<"YES"
#define no cout<<"NO"
#define minus1; { cout<<-1; return; }
#define zero; { cout<<0; return; }
#define nl cout<<endl
#define int long long
const int Mod=1e9+7;
void solution()
{
    int n,k;    cin >> n >> k;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    pbds<pair<int,int>>p;
    int l=0 , r=0;
    while(r<n)
    {
        p.insert({v[r],r});
        if(p.size()==k)
        {
            int m = k;
            if(k%2==0) m--;
            auto [x,y] = *p.find_by_order(m/2);
            cout << x <<" ";
            p.erase({v[l],l});
            l++;
        }
        r++;
    }
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        solution(); nl;
    }
    return 0;
}
