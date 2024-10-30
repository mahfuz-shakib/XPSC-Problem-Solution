// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    int a[n];
    int s=0, o=0, x=INT_MAX;
    for(auto &i:a)
    {
        cin>>i;
        s+=i;
        if(i%2)
        {
            o++;
            x=min(x,i);
        }
    }
    if(o%2)cout<<s-x;
    else cout<<s;
   
    return 0;
}

