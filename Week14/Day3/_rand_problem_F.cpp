/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define b begin()
#define e end()
#define rb rbegin()
#define re rend()
#define yes cout<<"Yes"
#define no cout<<"No"
#define minus1; { cout<<-1; return; }
#define zero; { cout<<0; return; }
#define nl cout<<endl
#define int long long
const int Mod=1e9+7;
void solution()
{
    string s; cin >> s;
    vector<int>v;
    bool flag=false;
    for(int i=0;i<s.size();i++)
    {
        if(v.size() && v.back()==s[i] && !flag)
        {
            flag=true;
            v.pop_back();
        }
        else if(v.size() && v.back()==s[i] && flag)
        {
            flag=false;
            v.pop_back();
        }
        else   v.push_back(s[i]);
    }
    flag ? yes : no;
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        solution(); nl;
    }
    return 0;
}

