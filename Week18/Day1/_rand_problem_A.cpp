// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int s=0,z=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0 && s!=0)
        {
            z++;
            s--;
        }
        if(a[i]>=k)s=s+a[i];
    }
    cout<<z;
}

signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin>>test;
    while(test--)
    {
        Try_Untill_Solve();
        cout<<endl;
    }
    return 0;
}

 
