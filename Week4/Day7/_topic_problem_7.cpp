/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n, k; cin >> n >> k;
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    if(sum<k) { cout << -1; return; }
    int a=0,l=0,r=0, ans = INT_MIN;
    while(r<n)
    {
       a+=v[r];
       while(a>k)
       {
           a-=v[l];
           l++;
       }
       ans = max(ans,r-l+1);
       r++;
    }
    cout << n - ans;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();   cout<<endl;
    }
    return 0;
}


