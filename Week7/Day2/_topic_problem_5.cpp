// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define int long long
const int maxN=(1LL<<15);
vector<int>pal;
bool isPalindrome(int x)
{
    string s =to_string(x);
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
            return false;
    }
    return true;
}
void allpalindrome()
{
    for(int i=0;i<maxN;i++)
    {
        if(isPalindrome(i))
            pal.push_back(i);
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    allpalindrome();
    int tc;  cin>>tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<int>v(n), cnt(maxN+1);
        for(auto &x:v) 
        {
            cin >> x;
            cnt[x]++;
        }
        int ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0; j<pal.size();j++)
            {
                int cur=(v[i] ^ pal[j]);
                ans +=  cnt[cur];
            }
        }
        cout << ans/2 << endl;
    }
    return 0;
}

