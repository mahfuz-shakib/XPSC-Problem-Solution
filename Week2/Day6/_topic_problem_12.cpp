// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n; char ch; string s;
    cin>>n>>ch>>s;
    if(ch=='g')
    {
        cout<<0;
        return;
    }
    vector<int>ry, gg;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='g')gg.push_back(i);
        else if(s[i]==ch)ry.push_back(i);
    }
    if(ry.back()>gg.back())gg.push_back(gg[0]+n);
    int mx=INT_MIN;
    for(int i=0;i<ry.size();i++)
    {
        int j=upper_bound(gg.begin(),gg.end(),ry[i])-gg.begin();
        int x=(gg[j]-ry[i]);
        mx=max(mx,x);
    }
    cout<<mx;
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

