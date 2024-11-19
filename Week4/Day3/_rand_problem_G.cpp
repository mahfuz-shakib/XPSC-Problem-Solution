/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin >> n;
    string t,s; cin >> t;
    for(int i=n-1;i>=0;i--)
    {
        char ch;
        if(t[i]=='0')
        {
            ch = 96 + 10*(t[i-2]-'0') + t[i-1]-'0';
            i-=2;
        }
        else
        {
            ch = 96 + t[i]-'0';
        }
        s.push_back(ch);
    }
    reverse(s.begin(),s.end());
    cout << s;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();   cout<<endl;
    }
    return 0;
}


