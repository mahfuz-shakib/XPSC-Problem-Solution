/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n, k;   cin >> n >> k;
    vector<int>v,a(n);
    map<int,int>m;
    for(auto &x:a)
    {
        cin >> x;
        m[x]++;
    }
    for(auto [x,y]:m)
    {
        if(y>=k) v.push_back(x);
    }
    if(!v.size()){  cout << -1; return; }
    int l=v[0],r=l, c=1,ans=1;
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i]==v[i+1]-1) c++;
        else if(c>ans)
        {
            ans=c;
            l=v[i]-c+1;
            r=v[i];
            c=1;
        }
        else c=1;
    }
    if(c>ans)
    {
        r=v.back();
        l=r-c+1;
    }
    cout << l <<" "<< r;
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

