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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int op=1, i=0, j=0, z=0;
    for(i=n-1; i>=0; i--)
    {
        if(k==0 && s[i]=='B')
        {
            j=i+1;
            break;
        }
        if(k>0 && s[i]=='B') k--;
    }
    if(k==0 &&i==-1) op=0;
    cout << op;
    while(k)
    {
        if(s[z]=='A')
        {
            k--;
            j=z+1;
        }
        z++;
    }
    if(op)
    {
        cout <<endl<< j <<" ";
        z ? cout<<'B' : cout << 'A';
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        solution();
        nl;
    }
    return 0;
}

