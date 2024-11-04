// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
void Try_To_Solve()
{
    cin.ignore();
    int n,k; cin>>n>>k;
    deque<int>d(n+1);
    map<int,int>mp,m2,m3;
    for(int i=1;i<=n;i++)
    {
        cin>>d[i];
        m3[d[i]]=i; //track last index of each element
        mp[d[i]]++; //track present elements
    }
    for(int i=n;i>=1;i--)
    {
        m2[d[i]]=i; //track first index of each element
    }
    while(k--)
    {
        int i,j; cin>>i>>j;

        if((mp[i]!=0 && mp[j]!=0) && 
        (m2[i]<m3[j]))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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

