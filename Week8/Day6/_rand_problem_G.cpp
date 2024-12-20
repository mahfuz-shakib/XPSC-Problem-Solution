/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n,m; cin >> n >> m;
    vector<int>v(n);
    set<int>s;
    for(auto &x:v)  cin >> x;
    for(int i=0;i<m;i++)
    {
        int x; cin >> x;
        if(s.find(x)!=s.end())continue;
        s.insert(x);
        for(int i=0;i<n;i++)
        {
            if(v[i]%(1<<x)==0) v[i]+=(1<<(x-1));
        }
    }
    for(auto x:v) cout << x <<" ";
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}

