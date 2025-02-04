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
//#define int long long
const int Mod=1e9+7;
const int N=200002;
void solution()
{
    int n,k,q;    cin >> n >> k >> q;
    vector<int>aa(N,0);
    for(int i=0; i<n; i++)
    {
        int l,r;        cin >> l >> r;
        aa[l]++;
        aa[r+1]--;
    }
    vector<int>v(N);
    for(int i=1;i<N;i++)
    {
        aa[i]=aa[i]+aa[i-1];
        if(aa[i-1]>=k) v[i-1]=1;
        else v[i-1]=0;
    }
    for(int i=1;i<N;i++) v[i]=v[i]+v[i-1];
    while(q--)
    {
        int l,r,ans;  cin >> l >> r;

        cout << v[r] - v[l-1] <<endl;
    }
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        solution();
    }
    return 0;
}



