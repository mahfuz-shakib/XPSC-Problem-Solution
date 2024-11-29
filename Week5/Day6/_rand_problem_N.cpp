
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    string s,t,a,b; cin >> s;
    t="",a="",b="";
    if(s=="()")
    {
        cout << "NO";
        return;
    }
    for(int i=1;i<=s.size();i++)
    {
        a+="(";
        b+=")";
        t+="()";
    }
    a+=b;
    if(a.find(s)==string::npos)
        cout << "YES" <<endl<< a;
    else cout << "YES" <<endl<< t;
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

