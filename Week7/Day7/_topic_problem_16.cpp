
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin>>n;
    string s; cin>>s;
    vector<int> a(n+1, 0);
    int m=0, o=0; //m--mil, o--omil
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        if(s[i]==s[j]) m++;
        else o++;
    }
    if(n%2)
    {
        while(true)
        {
            a[o] = 1;
            a[o+1] = 1;
            o+=2;
            if(m==0) break;
            m--;
        }
    }
    else{
        while(true)
        {
            a[o] = 1;
            o+=2;
            if(m==0) break;
            m--;
        }
    }
    for(auto i:a) cout<<i;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy(); cout<<endl;
    }
    return 0;
}



