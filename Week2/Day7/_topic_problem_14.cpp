// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n; cin>>n;
    map<int,int>m;
    while(n--)
    {
        int i;
        cin>>i;
        m[i]++;
    }
    int p=0,q=0;
    for(auto [x,y]:m)
    {
        if(m[x-1]<y)
        {
            p+=y;
            q+=m[x-1];
        }
    }
    cout<<p-q;
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

