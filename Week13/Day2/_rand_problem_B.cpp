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
void Bhai_Code_Ekhane()
{
    int n, aa, bb; cin >> n >> aa >> bb;
    set<int>s,t;
    int x=0,y=0;
    for(int i=1;i<=n;i++)
    {
        if(i>=aa && i!=bb)
        {
            s.insert(i);
            y++;
        }
        if(y==n/2) break;
    }
    for(int i=1;i<=n;i++)
    {
        if(i<=bb && s.find(i)==s.end())
        {
            s.insert(i);
            x++;
        }
        if(x==n/2) break;
    }
    if(y<n/2 || x<n/2) cout <<-1;
    else
    {
        for(auto x:s) cout <<x<<" ";
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        Bhai_Code_Ekhane();
        nl;
    }
    return 0;
}


