
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin >> n;
    vector<int> a(n - 1), b;
    int mx = 0;
    for(auto &x:a)   cin >> x;
    b.push_back(a[0]);
    for(int i = 0; i <a.size()-1; i++){
        b.push_back(a[i] | a[i + 1]);
    }
    b.push_back(a.back());
    for(int i = 0; i < n - 1; i++){
        if((b[i] & b[i + 1]) != a[i])
        {
            cout <<-1;
            return;
        }
    }
    for(auto x:b)cout << x <<" ";
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy(); cout<<endl;
    }
    return 0;
}