// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n;cin>>n;
    deque<int>d(n);
    map<int,int>m;
    for(auto &i:d)cin>>i;
    int c=0;
    for(int i=n-1;i>=0;i--)
    {
        if(m[d[i]]==0)
        {
            c++;
            m[d[i]]=1;
        }
        else break;
    }
    cout<<n-c;
}

signed main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0);

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   cout<<endl;
    }
    return 0;
}