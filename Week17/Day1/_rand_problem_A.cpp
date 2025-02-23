#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<char>v,v1;
        for(int i=97;i<k+97;i++)
        {
            char c=i;
            v.push_back(c);
        }
        for(int i=0,j=1;j<=n;i++)
        {
            v1.push_back(v[i]);
            if(i==v.size()-1)
            {
                i=-1;
                j++;
            }
        }
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i];
        }
        cout<<endl;
    }
}
 
