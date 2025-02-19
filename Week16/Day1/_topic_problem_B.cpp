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
    int n,m; cin >> n >> m;
    vector<int>v[n+1];
    while(m--)
    {
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int x,y,par_of_leaf;
    for(auto vect:v)
    {
        if(vect.size()==1)
        {
            par_of_leaf = vect[0];
            y = v[par_of_leaf].size()-1;
            break;
        }
    }
    for(auto child:v[par_of_leaf])
    {
        if(v[child].size()>1)
        {
            x=v[child].size();
            break;
        }
    }
    cout<< x <<" "<< y;
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


