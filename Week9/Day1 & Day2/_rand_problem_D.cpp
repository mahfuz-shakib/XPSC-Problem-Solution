/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin >> n;
    string s; cin >> s;
    map<char,int>mp;
    for(auto ch: s) mp[ch]++;
    if(s[0]=='s')
    {
        if(mp['s']==1 || mp['p']==0 || (mp['p']==1 && s[n-1]=='p'))
            cout<<"YES";
        else  cout <<"NO";
    }
    else if(s[0]=='p')
    {
        if(mp['s']==0)  cout<<"YES";
        else cout<<"NO";
    }
    else
    {
        if(mp.size()<=2 ||(mp['p']==1 && s[n-1]=='p'))
            cout << "YES";
        else  cout << "NO";
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}

