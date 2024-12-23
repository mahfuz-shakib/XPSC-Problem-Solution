/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define int long long
signed main()
{
    Mahfuz_Shakib
    int n, k;   cin >> n >> k;
    vector<int>v;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i!=n/i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    k<=v.size() ? cout << v[k-1] : cout << -1;  
    return 0;
}