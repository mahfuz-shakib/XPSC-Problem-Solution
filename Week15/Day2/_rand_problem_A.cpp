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
map<int,int>mp;
bool flag=false;
void test(int x, int s)
{
    mp[x]--;
    if(mp[x]==0) mp.erase(x);
    for(auto [p,q]:mp)
    {
        if((s-p == p && q>1) || (s-p!=p && mp.find(s-p)!=mp.end()))
        {
            flag=true;
            break;
        }
    }
    mp[x]++;
}
void solution()
{
    int n; cin >> n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int x; cin >> x;
        x%=10;
        s.insert(x);
        mp[x]++;
    }
    for(auto x:s)
    {
        if(!flag) test(x,3-x);
        if(!flag) test(x,13-x);
        if(!flag) test(x,23-x);
        if(flag) {yes; return;}
    }
    no;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;    cin>>tc;
    while(tc--)
    {
        mp.clear(); flag=false;
        solution(); nl;
    }
    return 0;
}

