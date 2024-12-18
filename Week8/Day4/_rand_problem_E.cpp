/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin>>n;
    string s = "";
    bool flag = true;
    int m=n;
    while(n>0){
        if(flag) {
            s +="aa";
            flag = false;
        }
        else {
            s += "bb";
            flag = true;
        }
        n -=2;
    }
    for(int i=0;i<m;i++) cout << s[i];
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}

