/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void Good_Bye_2024()
{
    int n,k;    cin >> n >> k;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    while(k--)
    {
        int x;  cin >> x;
        int indx=0;
        if(x<v[0]) indx=0;
        else if(x>v.back()) indx=n;
        else
        {
            int l=0,r=n-1;
            while(l<=r)
            {
                int m = (l+r)/2;
                if(v[m]<=x)
                {
                    l = m + 1;
                    indx = m;
                }
                else r = m - 1;
            }
            indx++;
        }
        cout << indx << endl;
    }
}
signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc; cin>>tc;
    while(tc--)
    {
        Good_Bye_2024();
        cout<<endl;
    }
    return 0;
}


