// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    string s,t;
    cin >> s >> t;
    
    if(s.back()==t.back())
    {
        if(s.size()==t.size()) cout<<"=";
        else if(s.back()=='L')
        {
            if(s.size()>t.size()) cout<<">";
            else cout<<"<";
        }
        else
        {
            if(s.size()>t.size()) cout<<"<";
            else cout<<">";
        }
    }   
    else
    {
        if(s.back()=='L' || t.back()=='S') cout<<">";
        else if(s.back()=='S' ||t.back()=='L') cout<<"<";
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

