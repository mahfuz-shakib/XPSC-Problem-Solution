// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    int s,t, cnt=0;
    cin >> s >> t;
    for(int i=0;i<=s;i++)
    {
        for(int j=0;j<=s;j++)
        {
            for(int k=0;k<=s;k++)
            {
                if(i+j+k<=s && i*j*k<=t) cnt++;
            }
        }
    }
    cout<<cnt;
}

signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test=1;   //cin >> test;
    while(test--)
    {
        Try_Untill_Solve();
        cout<<endl;
    }
    return 0;
}

