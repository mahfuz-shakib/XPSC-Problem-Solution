
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;  cin>>n;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    string s="1";
    int last=v[0];
    int f1=1;
    for(int i=1; i<n; i++)
    {
        if(v[i]>=last && f1){
            last=v[i];
            s+="1";
        }
        else if(v[i]<=v[0] && f1){
            last=v[i];
            s+="1";
            f1=0;
        }
        else if(last<=v[i] && v[i]<=v[0]){
            last=v[i];
            s+="1";
        }
        else    s+="0";
    }
    cout << s;
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



