// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    int l=0, r=0,c=0;
    deque<char>q;
    while(r<n)
    {
        if(s[r]=='B')
        {
            if(q.empty()) l=r;
            q.push_back('B');
        }
        if(r-l+1==k)
        {
            if(!q.empty())
            {
                c++;
                q.clear();
            }
            l=r+1;
        }
        r++;
    }
    if(!q.empty()) c++;
    
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

