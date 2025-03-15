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
int a[mxn];
pair<int,int> t[4*mxn];
void build(int n, int bg, int en)
{
    if(bg==en)
    {
        t[n]={a[bg],1};
        return;
    }
    int mid=(bg+en)/2, l=2*n, r=l+1;
    build(l,bg,mid);
    build(r,mid+1,en);

    auto [x,p]=t[l];
    auto [y,q]=t[r];
    if(x<y) t[n] = t[l];
    else if(x>y) t[n]=t[r];
    else t[n] = {x,p+q};
}
void update(int n, int bg, int en,int i,int v)
{
    if(i<bg || i>en) return;
    if(bg==en)
    {
        t[n]={v,1};
        return;
    }
    int mid=(bg+en)/2, l=2*n, r=l+1;
    update(l,bg,mid,i,v);
    update(r,mid+1,en,i,v);

    auto [x,p]=t[l];
    auto [y,q]=t[r];
    if(x<y) t[n] = t[l];
    else if(x>y) t[n]=t[r];
    else t[n] = {x,p+q};
}
pair<int,int> query(int n, int bg, int en, int i, int j)
{
    if(en<i || j<bg) return { Mod, 0};
    if(bg>=i && en<=j) return t[n];
    int z, mid=(bg+en)/2, l=2*n, r=l+1;

    auto [x,p] = query(l,bg,mid,i,j);
    auto [y,q] = query(r,mid+1,en,i,j);
    if(x<y) return {x,p};
    else if(x>y) return {y,q};
    else return {x,p+q};
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
            auto[x,y] = query(1,1,n,l,r);
            cout << x <<" "<< y <<endl;
        }
    }
    return 0;
}
