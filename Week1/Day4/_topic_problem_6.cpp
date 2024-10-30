// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    string s; cin>>s;
    map<int,char>mp;
    int j=0,k=0;
    vector<int>v1,v2;
    for(auto i:s)
    {
        if(i>='A' && i<='Z')
        {
            if(i!='B')
            {
                mp[j]=i;
                v1.push_back(j);
                j++;
            }
            else if(v1.size())
            {
                mp.erase(v1.back());
                v1.pop_back();
            }
        }
        k=j;
        if(i>='a' && i<='z')
        {
            if(i!='b')
            {
                mp[k]=i;
                v2.push_back(k);
                k++;
            }
            else if(v2.size())
            {
                mp.erase(v2.back());
                v2.pop_back();
            }
        }
        j=k;
    }
    for(auto [x,y] :mp)cout<<y;
}

signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin>>test;
    while(test--)
    {
        Try_Untill_Solve();
        cout<<endl;
    }
    return 0;
}

