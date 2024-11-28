/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n,k;
    cin >> n >> k;
    vector<int>v(k),d;
    for(auto &x:v) cin >> x;
    int m= v[1]-v[0];
    int t=1,x;
    if(n==1 || k==1)
    {
        cout<<"Yes"; return;
    }
    for(int i=2; i<k; i++)
    {
        if(m<=v[i]-v[i-1]) m=v[i]-v[i-1];
        else{ t=0; break; }
    }
    if(t)
    {
        m= v[1]-v[0];
        x=n-k+1;
        x*m>=v[0]?t=1:t=0;
    }
    t? cout << "Yes" : cout << "No";
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



