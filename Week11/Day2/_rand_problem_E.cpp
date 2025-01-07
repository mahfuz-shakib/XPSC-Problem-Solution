/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    int n;  cin >> n;
    deque<int>v(n), d;
    for(auto &x:v) cin >> x;
    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i]>v[i+1] && i<n-1)
        {
            while(v[i])
            {
                d.push_front(v[i]%10);
                v[i] /= 10;
            }
        }
        else d.push_front(v[i]);
    }
    bool flag = true;
    for(int i=0; i<d.size()-1; i++)
    {
        if( d[i] > d[i+1] )
        {
            flag = false;
            break;
        }
    }
    flag ? cout << "YES" : cout << "NO";
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        January_2025();
        cout<<endl;
    }
    return 0;
}

