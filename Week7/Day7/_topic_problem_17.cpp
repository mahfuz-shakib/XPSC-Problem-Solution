
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;   cin>>n;
        int x=__lg(n)-1;
        int k=x;
       for(int i=0; i<=x;i++){
          k=k|(1<<i);
       }
       if(n==1)k=0;
       cout<<k;
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





