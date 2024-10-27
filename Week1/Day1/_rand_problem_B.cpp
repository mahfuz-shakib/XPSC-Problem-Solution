// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;  cin>>a>>b>>c;
    int i=1;
   while(c*i<=b)
    {
       if(c*i>=a && c*i<=b)
            break;
       i++;
    }
    c*i>b?cout<<-1:cout<<c*i;
    return 0;
}

