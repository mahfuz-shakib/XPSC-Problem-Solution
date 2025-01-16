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

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        int n, m; cin >> n >> m;
        string same="";
        deque<string>d;
        map<string, int>mp;
        while(n--)
        {
            string t, k; cin >> t;   k=t;
            reverse(k.begin(),k.end());
            if(k!=t) mp[t]++;
            else same=t;
        }
        d.push_back(same);
        n=same.size();
        for(auto [t,x]:mp)
        {
            string k=t;
            if(mp[k]) reverse(k.begin(),k.end());
            if(mp[k] && mp[t])
            {
                n+=t.size()+k.size();
                d.push_front(t);
                d.push_back(k);
                mp[k]=0;
                mp[t]=0;
            }
        }
        cout << n <<endl;
        for(auto st:d) cout<<st;
    }
    return 0;
}




