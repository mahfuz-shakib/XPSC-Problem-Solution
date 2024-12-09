// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define int long long

void Try_To_Solve()
{
    int n; cin >> n;
    deque<int>v;
    for(int i=0;i<=__lg(n);i++)
    {
        if((n>>i)&1)
        {
            int val = n - (1LL<<i);
            if(val>0) v.push_front(val);
        }
    }
    v.push_back(n);
    cout << v.size()<<endl;
    for(auto x:v)
    {
        cout << x <<" ";
    }
}

signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   cout<<endl;
    }
    return 0;
}

