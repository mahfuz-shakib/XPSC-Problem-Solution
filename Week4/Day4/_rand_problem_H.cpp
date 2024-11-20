// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n, p; cin >> n >> p;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
       int x; cin >> x;
       v.push_back(x+i);
    }
    sort(v.begin(),v.end());
    int t=0,s=0;
    for(auto x:v)
    {
        s+=x;
        if(s<=p)t++;
        else break;
    }
    cout << t;
}
/* -  -  - Mahfuz Shakib -  -  - */
signed main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0);

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();   cout<<endl;
    }
    return 0;
}



