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
    int n; cin >> n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int l,r; cin >>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    int sum=0;
    for(auto[x,y]:mp)
    {
        sum+=y;
        if(sum>2)
        {
            no;
            return;
        }
    }
    yes;
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        solution(); nl;
    }
    return 0;
}

