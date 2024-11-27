/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;  cin >> n;
    vector<int>v(n),e;
    int odd=INT_MIN;
    for(auto &x:v)
    {
        cin >> x;
        if(x%2) odd=max(x,odd);
        else e.push_back(x);
    }
    if(e.size()==0 || e.size()==n)
    {
        cout << 0; return;
    }
    sort(e.begin(),e.end());
    int cnt=0, even=e.size();
    for(int i=0;i<e.size();i++)
    {
        if(odd<e[i] && odd<e.back())
        {
            cnt+=even+1;
            break;
        }
        else if(odd>e[i] && odd>e.back())
        {
            cnt+=even;
            break;
        }
        else
        {
            odd+=e[i];
            cnt++;
            even--;
        }
    }
    cout << cnt;

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



