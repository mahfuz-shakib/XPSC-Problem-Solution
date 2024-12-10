// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define int long long

void Try_To_Solve()
{
    string s,t;
    cin >> s >> t;
    int sv=0,tv=0, wt=0, prob=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+') sv++;
        else sv--;
        
        if(t[i]=='+') tv++;
        else if(t[i]=='-') tv--;
        else wt++;
    }
        for(int i=0; i<(1<<wt);i++)
        {
            int res=0;
            for(int k=0;k<wt;k++)
            {
                if((i>>k)&1) res++;
                else res--;
            }
            if(res+tv==sv) prob++;
            res=0;
        }
        float ans = (float)prob/(1<<wt);
        cout << fixed << setprecision(12) << ans;
}

signed main()
{
    Mahfuz_Shakib

    int tc=1;
    //int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   cout<<endl;
    }
    return 0;
}

