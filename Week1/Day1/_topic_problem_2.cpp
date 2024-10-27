// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
void InshaAllah()
{
    int n;cin>>n;
    string s; cin>>s;
    int i,j;
    for(i=0;i<n;i++)
    {
        if(s[i]=='B')break;
    }
    for(j=n-1;j>=0;j--)
    {
        if(s[j]=='B')break;
    }
    cout<<j-i+1;
    
}
signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin>>test;
    while(test--)
    {
        InshaAllah();
        cout<<endl;
    }
    return 0;
}

