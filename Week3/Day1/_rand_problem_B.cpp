// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
     int n; cin>>n;
	    int a[n];
	    for(auto &i:a)cin>>i;
	    sort(a,a+n);
        int mn=INT_MAX;
        mn=min(mn,a[n-2]-a[1]); //delete 1st & last element
        mn=min(mn,a[n-1]-a[2]); //delete first two element
        mn=min(mn,a[n-3]-a[0]); //delete last two element
	    cout<<mn;
}

signed main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0);

    //int tc=1;
    int tc;  cin>>tc;
    while(tc--)
    {
        Try_To_Solve();   cout<<endl;
    }
    return 0;
}

