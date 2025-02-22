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
vector<int>v;
int ans=0;
void sorting(int l1,int r1, int l2, int r2)
{
    int mn = *min_element(v.b+l1,v.b+r1);
    int mx = *max_element(v.b+l2,v.b+r2);
    if(mn>mx)
    {
        ans++;
        int j=l2;
        for(int i=l1;i<=r1;i++,j++)
        {
            swap(v[i],v[j]);
        }
    }
    if(l1==r1 || l2==r2) return;
    int m1 = (l1+r1)/2, m2 = (l2+r2)/2;
    sorting(l1,m1, m1+1,r1);
    sorting(l2,m2, m2+1,r2);
}
void solution()
{
    int m;    cin >> m;
    v.clear();
    ans=0;
    v.resize(m);
    for(auto &x:v) cin >> x;
    if(is_sorted(v.b,v.e)) {zero;}
    int mid=m/2-1;
    sorting(0,mid, mid+1,m-1);
    if(is_sorted(v.b,v.e)) cout << ans;
    else {minus1;}
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
