// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
   int n; cin>>n;
   int v[n];
   for(auto &i:v)cin>>i;
   for(int i=0;i<n;i++)
   {
    int x, a=0; cin>>x;
    string s; cin>>s;
    for(auto c:s)
    {
        c=='D'?a++:a--;
    }
    a+=v[i];
    if(a<0) cout<<(a+10)%10<<" ";
    else cout<<a%10<<" ";
   } 
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

