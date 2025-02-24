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
    int n,k; cin >> n >> k;
    int ans = INT_MAX, res=INT_MAX;
    int even=0;
    for(int i=1;i<=n;i++)
    {
        int x; cin >> x;
        if(x%2==0) even++;
        if(x%k==0) ans = 0;
        else ans=min(ans,k-x%k);
    }
    if(k==4)
    {
        if(even==0) res=2;
        else if(even==1) res=1;
        else res=0;
    }
    cout << min(ans,res);
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
 
