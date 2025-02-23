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
const int N=1005;
int v[N][N];
bool vis[N][N];
int n,m,sum=0;
vector<pair<int,int>>pos={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i, int j)
{
    if(i<1 || i>n || j<1 || j>m)
        return false;
    else return true;
}
void dfs(int i,int j)
{
    vis[i][j] = true;
    sum+=v[i][j];
    for(auto [x,y]:pos)
    {
        int ii=x+i,jj=y+j;
        if(valid(ii,jj) && !vis[ii][jj] && v[ii][jj])
        {
            dfs(ii,jj);
        }
    }
}
void solution()
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++) vis[i][j]=false;
    }
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> v[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(!vis[i][j] && v[i][j])
            {
                dfs(i,j);
                ans=max(sum,ans);
                sum=0;
            }
        }
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


