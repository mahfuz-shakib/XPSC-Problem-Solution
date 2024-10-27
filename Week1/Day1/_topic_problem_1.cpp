// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long
void InshaAllah()
{
    int n; cin>>n;
    list<int>l(n);
    for(auto &i:l)cin>>i;
    int s=0,d=0,i=1;
    while(l.size())
    {
        if(l.front()>=l.back())
        {
            i%2==0?d+=l.front():s+=l.front();
            l.pop_front();
        }
        else
        {
              i%2==0?d+=l.back():s+=l.back();
              l.pop_back();
        }
        i++;
    }
    cout<<s<<" "<<d;
}
signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test=1;
    //cin>>test;
    while(test--)
    {
        InshaAllah();
        cout<<endl;
    }
    return 0;
}

