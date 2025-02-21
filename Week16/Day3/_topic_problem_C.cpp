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
    map<int,int>child, bad_child, status;
    for(int i=1;i<=n;i++)
    {
        int par, condition; cin >> par >> condition;
        if(par>0) child[par]++;

        if(condition)
        {
            bad_child[par]++;
            status[i]=1;
        }
    }
    bool flag=false;
    for(int i=1;i<=n;i++)
    {
        if(child[i] == bad_child[i] && status[i])
        {
            cout << i <<" ";
            flag=true;
        }
    }
    if(!flag) cout << -1;
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
