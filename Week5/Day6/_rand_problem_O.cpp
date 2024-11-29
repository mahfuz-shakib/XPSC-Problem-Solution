
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n,k;    cin >> n >> k;
    string s;   cin >>s;
    deque<int>d;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1') d.push_back(i+1);
    }
    int cnt=0;
    if(d.size()==0)
    {
        cnt = n/(k+1);
        if(n%(k+1)) cnt++;
    }
    else
    {
        int i=d[0];
        while(i>=1)
        {
            i-=k+1;
            if(i>=1) cnt++;
        }
        i=d.back();
        while(i<=n)
        {
            i+=k+1;
            if(i<=n) cnt++;
        }
        i=d[0];
        while(d.size())
        {
            while(i+k+1<d[0]-k)
            {
                cnt++;
                i+=k+1;
            }
            i=d[0];
            d.pop_front();
        }
    }
    cout << cnt;
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
