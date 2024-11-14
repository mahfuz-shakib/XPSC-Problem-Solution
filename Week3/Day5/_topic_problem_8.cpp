// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
//merging two arrays using to pointer technique
void Try_To_Solve()
{
    int n,m; cin >> n >> m;
    vector<int>a(n),b(m),ans;
    for(auto &i:a) cin >> i;
    for(auto &i:b) cin >> i;
    int l=0,r=0;
    while(true)
    {
        if( l<n && (r==m|| a[l]<=b[r]))
        {
            ans.push_back(a[l]);
            l++;
        }
        else if(r<m)
        {
            ans.push_back(b[r]);
            r++;
        }
        else break;
    }
    for(auto x:ans)
        cout << x <<" ";
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

