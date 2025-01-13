/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    int n,k; cin >> n >> k;
    vector<int>v(k);
    for(auto &x:v) cin >> x;
    sort(v.begin(),v.end(),greater<int>());
    int i=0, cat_position=0;
    while(i<k && v[i]>cat_position)
    {
        cat_position+=(n-v[i]);
        i++;
    }
    cout << i;
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
