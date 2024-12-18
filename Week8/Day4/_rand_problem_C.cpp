/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;  cin>>n;
    vector<int> a(n),b(n);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;

    int ans = 0;
    bool flag = true;
    for(int i=0; i<n; i++)
    {
        ans = max(ans, (a[i]-b[i]));
    }
    for(int i=0; i<n; i++)
    {
        a[i] -= ans;
        if(a[i]<0) a[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
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

