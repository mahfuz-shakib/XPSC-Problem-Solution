// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
/*      @author : Mahfuz_Shakib        */
void Try_To_Solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int x=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[0]) 
        {
            x=0;
            continue;
        }
        if(x==0)
        {
            c++;
            x++;
        }
    }
    cout<<c;
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

