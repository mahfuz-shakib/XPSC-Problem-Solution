/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void Good_Bye_2024()
{
    int x,y,k;
    cin >> x >> y >> k;
    while(x!=1 && k>0)
    {
        int p = min(y - (x%y),k);
        x+=p;   k-=p;
        while(x%y==0) x/=y;
    }
    if(k>0)   x += k%(y-1);
    cout << x;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        Good_Bye_2024();
        cout<<endl;
    }
    return 0;
}


