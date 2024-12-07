/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin >> n;
    vector<int> v(n);
    int x=1,s=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        if(v[i] && x && i<n-1)
        {
            x=0;
            s+=v[i];
            continue;
        }
        if(x==0 && i<n-1)
        {
            if(v[i]==0) c++;
            else s+=v[i];
        }
    }
    cout << s+c;

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
