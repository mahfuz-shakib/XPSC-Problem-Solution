// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define int long long
void Try_To_Solve()
{
    int n; cin >> n;
    queue<int>q;
    q.push(4);
    q.push(7);
    int index=0;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        if(p>n) break;
        index++;
        int a = p*10+4;
        int b = p*10+7;
        if(a <= n) q.push(a);
        if(b <= n) q.push(b);
    }
    cout << index;
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

