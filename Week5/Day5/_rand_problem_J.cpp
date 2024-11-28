/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;      cin >> n;
    string s;     cin >> s;
    map<char,int> m;
    for(auto ch:s)  m[ch]++;
    vector<pair<int,char>> v;
    for(auto [ch,x]:m)
    {
        v.push_back({x,ch});
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    s.clear();
    while(v.size())
    {
        for(int i=v.size()-1; i>=0; i--)
        {
            s.push_back(v[i].second);
            v[i].first--;
            if(v[i].first==0) v.pop_back();
        }
    }
    cout << s;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}


