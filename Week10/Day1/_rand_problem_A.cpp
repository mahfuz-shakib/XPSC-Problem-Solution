/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void Good_Bye_2024()
{
    string s; cin >> s;
    map<char,int>m;
    for(auto ch:s) m[ch]++;
    deque<char>d;
    int cnt=0,z=0;
    char chh;
    for(auto [ch,x]:m)
    {
        if(x%2)
        {
            cnt++;
            chh=ch;
            z=x;
        }
        if(cnt>1) break;
    }
    if(cnt>=2) cout <<"NO SOLUTION";
    else
    {
        while(z--) d.push_back(chh);
        m[chh]=0;
        for(auto [ch,x]:m)
        {
            x/=2;
            while(x--)
            {
                d.push_front(ch);
                d.push_back(ch);
            }
        }
        for(auto ch:d) cout<<ch;
    }
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        Good_Bye_2024();
        cout<<endl;
    }
    return 0;
}

