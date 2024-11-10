// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

void Try_To_Solve()
{
    int n;cin>>n;
	int a[n];
	map<int,int>m;
	for(auto &i:a)
	{
	    cin>>i;
	    m[i]=i;
	}
	if(m.size()==1)
	    cout<<"YES";
	else if(m.size()==2 && (m.begin()->first==0 || m.rbegin()->first==0))
	    cout<<"YES";
	else 
	    cout<<"NO";
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

