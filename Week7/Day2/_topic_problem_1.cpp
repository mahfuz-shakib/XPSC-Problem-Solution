// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define int long long

void Try_To_Solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    bool flag=false;
    for(int num=0; num<(1<<n); num++)
    {
        int sum=0;
        for(int bit=0; bit<n; bit++)
        {
            if((num>>bit)&1)    sum+=a[bit];
            else    sum-=a[bit];
        }
        if(sum%360==0)
        {
            flag=true;
            break;
        }
    }
    flag? cout <<"YES": cout << "NO";
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

