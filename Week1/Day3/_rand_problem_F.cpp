// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    string ss;   cin>>ss;
    set<char>ch;
    for(auto it:ss)ch.insert(it);
    char vv='a';
    for(auto it:ch)
    {
        if(it!=vv)break;
        vv++;
    }
    vv>'z'? cout<<"None" : cout<<vv;
    
    return 0;
}

