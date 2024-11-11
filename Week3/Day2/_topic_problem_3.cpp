// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n,m; cin >> n >> m;
    vector<int>a(n),b(m);
    for(auto &i:a)  cin>>i;
    for(auto &i:b)  cin>>i;
    int c=0, i=0,l=n-1;
    for(int j=0,k=m-1;i<m;)
    {
        if(j<n && b[i]==a[j])
        {
            c++,j++;
        }
        else i++;

        if(l>=0 && b[k]==a[l])
        {
            c++,i++;
        }
        else j++;
    }
    cout<<r;
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

