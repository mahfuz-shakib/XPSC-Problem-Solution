
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
int answer(vector<int>v)
{
    int ans=0,cnt=0;
    for(int j=v.size()-1; j>=0; j--)
    {
        if(v[j]) ans+=cnt;
        else cnt++;
    }
    return ans;
}
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;  cin >> n;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    int i=0, ans = answer(v);
    while(v[i] && i<n) i++;
    if(i<n)
    {
        v[i]=1;
        ans=max(ans,answer(v));
        v[i]=0;
    }
    i=n-1;
    while(v[i]==0 && i>=0) i--;
    if(i>=0)
    {
        v[i]=0;
        ans=max(ans,answer(v));
    }

    cout << ans;
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




