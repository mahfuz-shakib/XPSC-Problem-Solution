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
//#define int long long
const int Mod=1e9+7;
const int N=4005;
vector<int>v[N];
vector<int>d[N];
void dfs(int r)
{
    if(v[r].size()==0) return ;
    for(auto c:v[r])
    {
        dfs(c);
        d[r][0]+=d[c][0];
        d[r][1]+=d[c][1];
    }
}
void solution()
{
    int n;   cin >> n;
    for(int i=0;i<=N;i++)
    {
        v[i].clear();
        d[i].clear();
    }
    for(int i=2;i<=n;i++)
    {
        int x; cin >> x;
        v[x].push_back(i);
    }
    string s;   cin >> s;
    for(int i=1;i<=n;i++)
    {
        if(s[i-1]=='B') d[i]={1,0};
        else    d[i]={0,1};
    }
    dfs(1);
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(d[i][0]==d[i][1]) ans++;
    }
    cout << ans;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        solution();
        nl;
    }
    return 0;
}

