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
#define nl cout<<endl
#define int long long
const int Mod=1e9+7;
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin >> n ;
        vector<int>v(n),d(n);
        for(auto &x:v) cin >> x;
        if(n==1) { cout << -1 <<endl; continue;}
        for(int i=0;i<n;i++) d[i]=i+1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==d[i])
            {
                if(i+1<n) swap(d[i],d[i+1]);
                else swap(d[i],d[i-1]);
            }
        }
        for(auto x:d) cout << x <<" ";
        nl;
    }
    return 0;
}


