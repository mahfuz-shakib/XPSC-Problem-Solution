#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;

        if(a>=b)
        {
            a=a-b;
            if(a%2==0)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }
        else
        {
            b=b-a;
            if(b%2==0)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }
    }
}
