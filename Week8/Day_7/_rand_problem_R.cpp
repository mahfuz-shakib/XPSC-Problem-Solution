
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;  cin>>n;
    string s;   cin>>s;
    int x = 0, y=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='N') x++;
        else if(s[i]=='S') x--;
        else if(s[i]=='E') y++;
        else y--;
    }
    if((x%2!=0 || y%2!=0) || (x==0&&y==0&&n==2))
    {
        cout<<"NO";   return;
    }
    vector<char> ans(n, 'R');
    if( x==0 && y==0 && n>2 )
    {
        ans[0] = 'H';
        char ch;
        if(s[0]=='N') ch = 'S';
        else if(s[0]=='S')  ch = 'N';
        else if(s[0]=='W') ch = 'E';
        else ch = 'W';

        int i = 1;
        while(s[i]!=ch && i<n) i++;
        ans[i] = 'H';
    }
    else{

        for(int i=0;i<n; i++)
        {
            if(s[i]=='S' && x<0)
            {
                ans[i] = 'H';
                x+=2;
            }
            else if(s[i]=='N' && x>0){
                ans[i] = 'H';
                x-=2;
            }
            else if(s[i]=='E' && y>0){
                ans[i] = 'H';
                y-=2;
            }
            else if(s[i]=='W' && y<0){
                ans[i] = 'H';
                y+=2;
            }
        }
    }

    for(auto ch:ans) cout<<ch;
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
