#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,p;
        cin>>n>>x;
        vector<int>v,v1;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            v.push_back(p);
        }
        v.insert(v.begin(),0);
        p = 2*(x-v.back());
        for(int i=0;i<v.size()-1;i++)
        {
            x=v[i+1]-v[i];
            v1.push_back(x);
        }
        v1.insert(v1.begin(),p);
        sort(v1.begin(),v1.end());
        cout<<v1.back()<<endl;
    }
}
