// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n,m; cin >> n >> m;
    int a[n], b[m];
    for(auto &i:a) cin >> i;
    for(auto &i:b) cin >> i;
    int c=0, i=0, j=0;
    while(j<m)
    {
        if(i<n && a[i]<b[j])
        {
            c++, i++;
        }
        else
        {
            cout << c << " ";
            j++;
        }
    }
}

signed main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0);

    int tc=1;
    //int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   cout<<endl;
    }
    return 0;
}

