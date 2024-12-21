/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int R=0;
    for(int i=0; i<8; i++)
    {
        int r=0;
        for(int j=0; j<8; j++)
        {
            char ch; cin >> ch;
            if(ch=='R') r++;
        }
        if(r==8) R=r;
    }
    R==8? cout << 'R': cout << 'B';
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;     cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}


