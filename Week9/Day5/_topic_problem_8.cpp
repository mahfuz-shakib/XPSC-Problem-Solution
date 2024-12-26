/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;

void Good_Bye_2024()
{
    int x;  cin >> x;
    int p=1,q=x;
    for(int i=1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            int lcm = (x/i)*(i/__gcd(x/i,i));
            if(lcm == x) p=i,q=x/i;
        }
    }
    cout << p <<" "<< q;

}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        Good_Bye_2024();
        cout<<endl;
    }
    return 0;
}


