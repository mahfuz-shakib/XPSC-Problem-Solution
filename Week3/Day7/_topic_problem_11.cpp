// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
/*      @author : Mahfuz        */
void Try_To_Solve()
{
    int n,k,q; cin >> n >> k >> q;
    vector<int>v(n);
    for(auto &d:v) cin >> d;
    int l=0,r=0,c=0,way=0;
    while(r<n)
    {
        if(v[r]<=q)c++;
        else
        {
            if(r-l+1>=k)
            {   
               c = c-k+1;
               way+=c*(c+1)/2;
            }
            c=0;
            l=r+1;
        }
        r++;
    }
    if(c && r-l>=k)   
    {
        c=c-k+1;
        way+=c*(c+1)/2;
    }
    cout << way;
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

