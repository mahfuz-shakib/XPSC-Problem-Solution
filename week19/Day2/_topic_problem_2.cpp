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
const int mxn=1e5+9;
int a[mxn],t[4*mxn];
void build(int n, int bg, int en)
{
    if(bg==en)
    {
        t[n]=a[bg];
        return;
    }
    int mid=(bg+en)/2, l=2*n, r=l+1;
    build(l,bg,mid);
    build(r,mid+1,en);
    t[n]=min(t[l],t[r]);
}
void update(int n, int bg, int en,int i,int v)
{
    if(i<bg || i>en) return;
    if(bg==en)
    {
        t[n]=v;
        return;
    }
    int mid=(bg+en)/2, l=2*n, r=l+1;
    update(l,bg,mid,i,v);
    update(r,mid+1,en,i,v);
    t[n]=min(t[l],t[r]);
}
int query(int n, int bg, int en, int i, int j)
{
    if(en<i || j<bg) return Mod;
    if(bg>=i && en<=j) return t[n];
    int mid=(bg+en)/2, l=2*n, r=l+1;
    return min(query(l,bg,mid,i,j),query(r,mid+1,en,i,j));
}
signed main()
{
    Mahfuz_Shakib
    int n,m; cin >>n >>m;
    for(int i=1;i<=n;i++) cin >> a[i];
    build(1,1,n);
    while(m--)
    {

        int op; cin >> op;
        if(op==1)
        {
            int i,v; cin >>i>>v;
            i++;
            update(1,1,n,i,v);
        }
        else
        {
            int l,r; cin >> l >>r;
            l++;
            int ans=query(1,1,n,l,r);
            cout << ans<<endl;
        }
    }
    return 0;
}

