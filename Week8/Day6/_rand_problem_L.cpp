/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;  cin>>n;
    int a[n];
    for(auto &x:a) cin >> x;
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        int x=a[i];
        if(a[x-1]==i+1)
        {
            flag=true;
            break;
        }
    }
    flag? cout<<2 : cout<<3;
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

