// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    string s;  cin >> s;
    int x=1; char ch;
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==s[i])
        {
            if(s[i]=='z') ch ='z'-1;
            else ch = s[i]+1;
            s.insert(s.begin()+i,ch);
            x=0;
            break;
        }
    }
    if(s.size()==1 || x )
    {
        if(s[0]=='z') ch ='z'-1;
        else ch = s[0]+1;
        s.insert(s.begin(),ch);
    }
    cout<<s;
}

signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test;   cin >> test;
    while(test--)
    {
        Try_Untill_Solve();
        cout<<endl;
    }
    return 0;
}