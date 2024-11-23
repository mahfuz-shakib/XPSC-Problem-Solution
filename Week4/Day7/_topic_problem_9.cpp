/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin >> n;
    vector<int>v(n),pre,l,r;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        if(pre.size()==0) pre.push_back(v[i]);
        else pre.push_back(pre[i-1]+v[i]);
    }
    string s; cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='L')l.push_back(i);
        else r.push_back(i);
    }
    int i=0,j=r.size()-1,ans=0;
    while(i<l.size() && j>=0)
    {
        if(l[i]>r[j]) break;
        ans+=pre[r[j]];
        if(l[i]) ans-=pre[l[i]-1];
        i++; j--;
    }
    cout << ans;
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


