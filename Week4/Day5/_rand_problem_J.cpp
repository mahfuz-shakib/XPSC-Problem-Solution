
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    string s,t,r; cin >> s;
    map<char,vector<int>>m;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=min(s[0],s.back()) && s[i]<=max(s[0],s.back()))
        {
            t.push_back(s[i]);
            m[s[i]].push_back(i+1);
        }
    }
    if(t[0]<=t.back()) sort(t.begin()+1,--t.end());
    else sort(t.begin()+1,--t.end(),greater<char>());
    r.push_back(t[0]);
    int cost=0;
    for(int i=0;i<t.size()-1;i++)
    {
        cost+=abs((t[i]-96)-(t[i+1]-96));
        if(r.back()!=t[i])r.push_back(t[i]);
    }
    if(r.back()!=t.back())r.push_back(t.back());
    cout<<cost<<" "<<t.size()<<endl;
    for(auto c:r)
    {
        for(auto x:m[c]) cout<<x<<" ";
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();   cout<<endl;
    }
    return 0;
}

