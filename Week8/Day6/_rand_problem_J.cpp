
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    string s; cin>>s;
    int o=0,z=0;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='0')  z++;
       else o++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            if(z>0) z--;
            else    break;
        }
        else
        {
            if(o>0) o--;
            else    break;
        }
    }
    cout << o+z;
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
