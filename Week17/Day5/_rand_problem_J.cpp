/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less_equal<T>,rb_tree_tag, tree_order_statistics_node_update>;
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
    int n,m,k;    cin >> n >> m >> k;
    vector<int>v(n),d(m);
    for(auto &x:v)  cin >> x;
    for(auto &x:d)  cin >> x;

    sort(v.b,v.e);
    sort(d.b,d.e);
    if(v[0]<d[m-1]) swap(v[0],d[m-1]); // swap by jellyfish

    sort(v.b,v.e);
    sort(d.b,d.e);
    if(k%2==0 && v[n-1]>d[0]) swap(v[n-1],d[0]); // swap by gellyfish

    int ans=0;
    for(auto x:v) ans+=x;

    cout << ans;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        solution(); nl;
    }
    return 0;
}

