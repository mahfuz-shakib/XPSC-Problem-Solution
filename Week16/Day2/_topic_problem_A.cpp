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
const int N=3e5+9;
vector<int>v[N], op(N);
string s;
void dfs(int x)
{
    if(v[x][0])
    {
        int y = v[x][0];
        if(s[x-1]!='L') op[y] = op[x] + 1;
        else op[y]=op[x];
        dfs(y);
    }
    if(v[x][1])
    {
        int y = v[x][1];
        if(s[x-1]!='R') op[y] = op[x] + 1;
        else op[y]=op[x];
        dfs(y);
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;     cin>>tc;
    while(tc--)
    {
        int n;     cin >> n;
        cin >> s;
        for(int i=0; i<=n; i++)
        {
            v[i].clear();
            op[i]=0;
        }
        for(int i=1; i<=n; i++)
        {
            int x,y;            cin >> x >> y;
            v[i].push_back(x);
            v[i].push_back(y);
        }
        dfs(1);
        int ans=INT_MAX;
        for(int i=1; i<=n; i++)
        {
            if(v[i][0]==0 && v[i][1]==0)
            {
                ans = min(ans,op[i]);
            }
        }
        cout << ans<<endl;
    }
    return 0;
}
