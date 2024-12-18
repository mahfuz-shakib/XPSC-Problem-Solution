
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin>>n;
    deque<int> v(n),d;
    for(auto &x:v) cin>> x;
    d=v;
    sort(d.begin(),d.end());
    bool flag=false;
    while(n--)
    {
        v.push_back(v[0]);
        v.pop_front();
        if(v==d)
        {
            flag=true;
            break;
        }
    }
    flag? cout <<"YES" : cout << "NO";
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


