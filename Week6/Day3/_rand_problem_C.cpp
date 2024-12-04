#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        if(n>=m && (n-m)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

