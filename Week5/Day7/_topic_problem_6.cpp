
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n,m;
    cin >> n >> m;
    if(n>m || n%2==0 && m%2)
    {
        cout << "NO";   return;
    }
    cout << "YES" <<endl;
    if(n==1)
    {
        cout<< m;   return;
    }
    for(int i=1; i<=n-2; i++)
        cout<< 1 <<" ";
    if(n%2)
        cout<< 1 <<" "<< m-n+1;
    else
        cout<<(m-n+2)/2<<" "<<(m-n+2)/2;
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



