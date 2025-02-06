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
    int n; cin >> n;
    string s,t; cin >> s;
    t=s;
    reverse(t.begin(),t.end());
    map<char,vector<int>>ms,mt;
    for(int i=0;i<n;i++) ms[s[i]].push_back(i);
    for(int i=0;i<n;i++) mt[t[i]].push_back(i);
    vector<int>p(n);
    for(char ch='a'; ch<='z';ch++)
    {
        for(int i=0;i<ms[ch].size();i++)
        {
            p[mt[ch][i]] = ms[ch][i];
        }
    }
    pbds<int>a;
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        ans += a.order_of_key(p[i]);
        a.insert(p[i]);
    }
    cout << ans;

}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        solution(); nl;
    }
    return 0;
}

