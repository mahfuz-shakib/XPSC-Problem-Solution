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
    for(int i=0;i<=log2(n)+1;i++)
    {
        int start = (1<<i);
        int gap = start*2;
        int numbers = (n+start)/gap;
        if(k<=numbers)
        {
            cout << (gap*k)-start;
            break;
        }
        else k-=numbers;
    }
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

