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
    int n; cin >> n;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    pbds<int>p;
    map<int,int>x;
    for(int i=n-1;i>=0; i--)
    {
        p.insert(v[i]);
        x[v[i]] = p.order_of_key(v[i]);
    }
    p.clear();
    int ans=0;
    for(int i=0; i<n;i++)
    {
        p.insert(v[i]);
        ans += x[v[i]] * (p.size() - p.order_of_key(v[i]) - 1);
    }
    cout << ans;
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


