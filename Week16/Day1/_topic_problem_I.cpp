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
    int n, z; cin >> n;
    vector<int>v,d;
    for(int i=1;i<=n;i++)
    {
        int x; cin >> x;
        if(i==1 || x==z)
        {
            z=x;
            v.push_back(i);
        }
        else d.push_back(i);
    }
    if(d.size()==0)
    {
        no; nl;
    }
    else
    {
        yes; nl;
        for(auto x:d) cout<<v[0]<<" "<<x<<endl;
        for(int i=1;i<v.size();i++) cout <<d[0]<<" "<<v[i]<<endl;
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        solution();
    }
    return 0;
}

