// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    int n; cin >> n; 
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    int c=1, x = INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(v[i-1]!=v[i] )
        {
            x = max(x,c);
            c=1;
            continue;
        }
        c++;
    }
    cout<<max(x,c);
}
signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test=1;
    //cin>>test;
    while(test--)
    {
        Try_Untill_Solve();
        cout<<endl;
    }
    return 0;
}

