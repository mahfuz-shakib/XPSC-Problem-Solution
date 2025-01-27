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
#define minus1; { cout<<-1; return; }
#define zero; { cout<<0; return; }
#define nl cout<<endl
#define int long long
const int Mod=1e9+7;
void Bhai_Code_Ekhane()
{
    int x, n, m;
    cin >> x >> n >> m ;
    for(int i=1; i<=m; i++)
    {
        if( n && x-10 > (x+20)/2 )
        {
            x=(x+20)/2;
            n--;
            i--;
        }
        else x-=10;
    }
    while(n--) x = (x+20)/2;
    x<=0 ? yes : no;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        Bhai_Code_Ekhane();
        nl;
    }
    return 0;
}





