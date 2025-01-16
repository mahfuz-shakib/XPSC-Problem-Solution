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
        string p,h; cin >> p >> h;
        if(h.size()<p.size()) {no; nl ; continue;}
        sort(p.begin(),p.end());
        bool flag=false;
        for(int i=0; i<=(h.size()-p.size());i++)
        {
            string k =h.substr(i,p.size());
            sort(k.begin(),k.end());
            if(k==p)
            {
                flag=true;
                break;
            }
        }
        flag ? yes : no;
        nl;
    }
    return 0;
}



