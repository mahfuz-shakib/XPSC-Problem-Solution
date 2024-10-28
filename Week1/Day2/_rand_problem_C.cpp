#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x==y)cout<<x+y;
    else cout<<2*max(x,y)-1;
    return 0;
}