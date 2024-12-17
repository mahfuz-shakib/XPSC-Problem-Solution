
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin>>n;
    vector<int>v;
    while(n>0)
    {
        if(n%2==0)  v.push_back(0);
        else
        {
            if((n-1)/2%2==0)
            {
                v.push_back(1);
                n-=1;
            }
            else{
                v.push_back(-1);
                n+=1;
            }
        }
        n/=2;
    }
    cout<<v.size()<<endl;
    for(auto x:v) cout<<x<<" ";
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy(); cout<<endl;
    }
    return 0;
}