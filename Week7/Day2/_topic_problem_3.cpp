// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define int long long

void Try_To_Solve()
{
    int n, op; cin >> n >> op;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    int mxbit=30;
    vector<int>bit(mxbit+1);
    for(int i=0;i<n;i++)
    {
        for(int k=mxbit;k>=0;k--)
        {
            if((v[i]>>k)&1) 
                bit[k]++;
        }
    }
    int ans=0;
    for(int k=mxbit;k>=0;k--)
    {
        if(bit[k]==n) 
            ans+=(1LL << k);
        else
        {
            int offbit = n - bit[k];
            if(offbit<=op)
            {
                ans+=(1LL << k);
                op-=offbit;
            }
        }
    }
    cout << ans;
}

signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   cout<<endl;
    }
    return 0;
}

