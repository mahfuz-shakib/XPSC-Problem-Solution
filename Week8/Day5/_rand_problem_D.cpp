/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;  cin >> n;
    string s;   cin >> s;
    int i,j, ans=0,res=0;
    char l,k;
    for(i=0,j=n-1; i<=j; i++,j--)
    {
        if(s[i]==s[j]) continue;
        k=s[i]; l=s[j];
        break;
    }
    bool f1=true, f2=true;
    for(int x=i,y=j;x<=y; )
    {
        if(s[x]==s[y]){ x++;y--; continue;}
        else if(s[x]==k) x++;
        else if(s[y]==k) y--;
        else { f1=false; break; }
        ans++;
    }
    for(int x=i,y=j;x<=y; )
    {
        if(s[x]==s[y]){ x++;y--; continue;}
        else if(s[x]==l) x++;
        else if(s[y]==l) y--;
        else { f2=false; break; }
        res++;
    }
    if(!f1 && !f2) cout << -1;
    else if(f1 && f2) cout << min(ans,res);
    else if(f1) cout << ans;
    else cout<<res;
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


