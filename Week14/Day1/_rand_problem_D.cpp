/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
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
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    if(v[0]>0)
    {
        cout << 1;
        return;
    }
    bool flag=true;
    set<int>s;
    s.insert(0);
    for(int i=1;i<n;i++)
    {
        if(v[i]==0) continue;
        if(s.find(v[i]-1)==s.end())
        {
            cout<<i+1;
            return;
        }
        else s.insert(v[i]);
    }
    cout << -1;
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



