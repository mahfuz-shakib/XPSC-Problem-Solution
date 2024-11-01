// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_Untill_Solve()
{
    int n,m; cin >> n >> m;
    map<string,string>mp;
    for(int i=1;i<=n;i++)
    {
        string a,b;
        cin >> a >> b;
        b.push_back(';');
        mp[b] = a;
    }
    for(int i=1;i<=m;i++)
    {
        string a,b;
        cin >> a >> b;
        cout << a <<" "<< b <<" ";
        cout<<"#"<< mp[b] <<endl;
    }

    
}

signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test=1;
    //cin>>test;
    while(test--)
    {
        Try_Untill_Solve();
        cout<<endl;
    }
    return 0;
}

