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
    string s,t;    cin >> s >> t;
    if(s[0]==t[0])
    {
        yes;        nl;        cout <<s[0]<<'*';
    }
    else if(s.back()==t.back())
    {
        yes;        nl;        cout <<'*'<<s.back();
    }
    else
    {
        for(int i=0;i<s.size()-1;i++)
        {
            if(t.find(s.substr(i,2))!=string::npos)
            {
                yes;   nl; cout <<'*'<<s[i]<<s[i+1]<<'*';
                return;
            }
        }
        no;
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



