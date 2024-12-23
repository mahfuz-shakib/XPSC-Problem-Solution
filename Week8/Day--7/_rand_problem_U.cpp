/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
        int n;  cin >> n;
        vector<int>a(n),b(n),c(n);
        for (auto &x:a) cin >> x;
        for (auto &x:b) cin >> x;
        for (int i=0; i<n; i++) c[i]=b[i]-a[i];
        sort(c.begin(),c.end(),greater<int>());
        int ans=0;
        for (int i=0,j=n-1; i<j; i++,j--)
        {
            if(c[i]+c[j]>=0) ans++;
            else i--;
        }
        cout << ans;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}

