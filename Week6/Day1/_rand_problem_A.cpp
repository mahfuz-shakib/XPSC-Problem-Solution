#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int x,y,z;
        cin>>x>>y;
        int p;
        if(y%2==0)
        {
            p=y/2;
            z=p*7;
        }
        else
        {
            p=y/2;
            z=p*7+11;
            p=p+1;
        }
        if(x<=z)            cout<<p<<endl;
        else
        {
            z=x-z;
            int a;
            a=z/15;
            if(z%15)
            {
                a++;

                cout<<p+a<<endl;
            }
            else cout<<p+a<<endl;
        }

    }
    return 0;
}

 
