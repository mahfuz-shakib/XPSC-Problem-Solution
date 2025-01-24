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
    int n; cin >> n;
    int mx=-1, mn=1001, ans=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        int x;  cin >> x;
        v.push_back(x);
        if(mx<=x) mx = x;
        if(mn>x) mn = x;
    }
    ans = max(mx-v[0], v[n-1]-mn);
    for(int i=0;i<n-1;i++)
    {
        ans = max(ans, v[i]-v[i+1]);
    }
    cout <<  ans;
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


