// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n;
    string s,t;
    cin>>n>>s>>t;
    bool f=true;
    for(int i=0;i<n;i++)
    {
        if( (s[i]=='R' && (t[i]=='B'||t[i]=='G')) ||
        (t[i]=='R' && (s[i]=='B'||s[i]=='G'))) 
            {
                f=false;
                break;
            }
    }
    f?cout<<"YES":cout<<"NO";
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

