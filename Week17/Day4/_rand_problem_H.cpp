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
    int n,k, x,y;
    cin >> n >> k;
    vector<int>v;
    v.push_back(1);
    if(k%2)
    {
        x = k-1; y=k+2;
    }
    else
    {
        x = k;    y=k+1;
    }
    if(x>1) v.push_back(x);
    if(y<=n) v.push_back(y);
    if(v.size()==1 || v.size()==3)
    {
        cout << v.size() << endl;
        for(auto x:v) cout << x <<" ";
    }
    else cout << -1;
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

