/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define b begin()
#define e end()
#define rb rbegin()
#define re rend()
#define yes cout<<"YES"
#define no cout<<"NO"
#define minus1; { cout<<-1; return; }
#define zero; { cout<<0; return; }
#define nl cout<<endl
#define int long long
const int Mod=1e9+7;
void Bhai_Code_Ekhane()
{
    int n,m;
    cin >> n >> m;
    string aa, bb;
    cin >> aa >> bb;
    int l=0,r=0,i=0,j=0,k=0;
    while(l<n && i<m)
    {
        while(i<m && bb[i]!=aa[l]) i++;
        if(i<m && aa[l]==bb[i])
        {
            k++;
            l++;
            i++;
        }
    }
    cout << k;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        Bhai_Code_Ekhane();
        nl;
    }
    return 0;
}



