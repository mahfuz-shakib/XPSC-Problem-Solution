
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;	cin>>n;
    vector<int>v(n); 
    for(auto &x:v) cin >> x;
    int ans=0;
    for(int i=0;i<30;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++) cnt+=((v[j]>>i)&1);
        ans=__gcd(ans,cnt);
    }
    for(int i=1;i<=n;i++)
            if(ans%i==0) cout << i <<" ";
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