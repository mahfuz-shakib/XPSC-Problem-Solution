// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n;cin>>n;
    cout<<2<<endl;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    while(v.size()>1)
    {
       
       double x=v.back();
       v.pop_back();
       int y=v.back();
       v.pop_back();
       int z =ceil((x+y)/2);
       v.push_back(z);
       cout<<x<<" "<<y<<endl; 
    }
}

signed main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0);

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   //cout<<endl;
    }
    return 0;
}

