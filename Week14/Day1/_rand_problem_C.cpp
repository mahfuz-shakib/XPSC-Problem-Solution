#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char ch;
        cin>>n;
        vector<char>v;
        for(int i=0; i<n; i++)
        {
            cin>>ch;
            v.push_back(ch);
        }
        for(int i=0; i<n; i++)
        {
            cout<<v[i];
            if(v[i]=='a'||v[i]=='e')
            {
                if((v[i+2]=='e'||v[i+2]=='a')&&i<n-2)
                {
                    cout<<".";
                }
            }
            else
            {
                if((v[i+1]=='b' || v[i+1]=='c'||v[i+1]=='d')&&i!=n-1)
                {
                    cout<<".";
                }
            }

        }
        cout<<endl;
    }
}
