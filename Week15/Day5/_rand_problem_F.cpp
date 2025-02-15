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
    int n;  cin >> n;
    deque<int>v(n),d;
    for(auto &x:v) cin >> x;
    int i=0;
    while(v[i]<v[i+1]) i++;
    int x=v[i];
    for(int j=i+1; j<n; j++)
    {
        if(v[j]<x) d.push_back(x-v[j]);
        else x=v[j];
    }
    int y=0,ans=0;
    sort(d.b,d.e);
    while(d.size())
    {
        ans+=(d[0]-y)*(d.size()+1);
        y=d[0];
        d.pop_front();
    }
    cout << ans;

}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        solution();
        nl;
    }
    return 0;
}
