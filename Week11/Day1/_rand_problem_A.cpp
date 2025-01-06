/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
void January_2025()
{
    int n; cin >> n;
    vector<int> v(n);
    int oneAche=0, oneHobe=0, sum=0;
    for(auto &x:v)
    {
        cin >> x;
        sum += x;
        if(x==1) oneAche++;
        else oneHobe++;
    }
    int replaceOneBy = sum - oneHobe;
    if(replaceOneBy >= oneAche * 2 && n>1 ) cout << "YES";
    else cout << "NO";
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


