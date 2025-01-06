
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==cnt+1) cnt++;
    }
    cout << ceil((n-cnt)/(float)k);
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        January_2025();
        cout<<endl;
    }
    return 0;
}



