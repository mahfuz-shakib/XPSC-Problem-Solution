// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define int long long

void Try_To_Solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    for(auto &x:v) cin >> x;
    int frnd=0, differBit=0;
    for(int i=0;i<m;i++)
    {
        for(int b=0;b<n;b++)
        {
            if(((v[m] >> b)&1) != ((v[i]>>b)&1))
                differBit++;
        }
        if(differBit<=k) frnd++;
        differBit=0;
    }
    cout << frnd;
}

signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   cout<<endl;
    }
    return 0;
}

