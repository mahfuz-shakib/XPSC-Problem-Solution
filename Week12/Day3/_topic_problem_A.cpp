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
const int mxN=1e6+9;
vector<int> d(mxN);
signed main()
{
    Mahfuz_Shakib

    for(int i=1;i<mxN;i++)
    {
        for(int j=i;j<mxN;j+=i)
        {
            d[j]++;
        }
    }
    int n; cin >> n;
    while(n--)
    {
        int x; cin >> x;
        cout << d[x] <<endl;
    }
    return 0;
}


