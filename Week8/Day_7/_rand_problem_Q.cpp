/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto&x:v) cin >> x;
    if(v[n-1]) cout << "NO";
    else
    {
        cout << "YES" <<endl;
        vector<int>b;
        for(int i=n-1; i>=0; i--)
        {
            if(v[i]==0 && i==0)
                b.push_back(0);
            else if(v[i]==0 && v[i-1]==0)
                b.push_back(0);
            else
            {
                int j=i-1;
                while(j>=0 && v[j])
                {
                    j--;
                    b.push_back(0);
                }
                b.push_back(i-j-1);
                i=j+1;
            }
        }
        for(auto x:b) cout << x <<" ";
    }
    ;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        cout<<endl;
    }
    return 0;
}
