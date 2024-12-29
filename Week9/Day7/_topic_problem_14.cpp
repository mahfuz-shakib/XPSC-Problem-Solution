
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void Good_Bye_2024()
{
    int n; cin >> n;
    vector<int>v(n);
    unordered_set<int>s;
    map<int,int>m;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        m[v[i]]=i+1;
    }
    for(int i=n-1; i>=0; i--) s.insert(v[i]);
    int a=0,b,x=-1,y=-1;
    for(auto i=s.begin(); i!=s.end(); i++)
    {
        for(auto j=i; j!=s.end(); j++)
        {
            if(__gcd(*i,*j)==1 && x+y<m[*i]+m[*j])
            {
                a=*i,b=*j;
                x=m[*i],y=m[*j];
            }
        }
    }
    if(a) cout << m[a] + m[b];
    else cout << -1;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        Good_Bye_2024();
        cout<<endl;
    }
    return 0;
}

