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
void solution()
{
    int n, k; cin >> n >> k;
    vector<char>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char x; cin >> x;
            if(i%k==0 && j%k==0)
                v.push_back(x);
        }
    }
    int x = sqrt(v.size());
    for(int i=1;i<=v.size();i++)
    {
        cout << v[i-1];
        if(i % x == 0) cout << endl;
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        solution();
    }
    return 0;
}



