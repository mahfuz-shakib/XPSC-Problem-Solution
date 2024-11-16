// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
/*      @author : Mahfuz        */
void Try_To_Solve()
{
    int n; cin >> n;
    vector<int>v(n);
    int sum=0;
    int cnt=0, neg=0;
    for(auto &x:v) 
    {
        cin >> x;
        sum+=abs(x);
        if(x<0) neg++;
        if(x>0 && neg)
        {
            cnt++;
            neg=0;
        }
    }
    if(neg)cnt++;
    cout<<sum<<" "<<cnt;
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

