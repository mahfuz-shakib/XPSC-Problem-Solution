/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);
#define b begin()
#define e end()
#define rb rbegin()
#define re rend()
#define yes cout<<"YES"
#define no cout<<"NO"
#define minus1; { cout<<-1; return; }
#define zero; { cout<<0; return; }
#define nl cout<<endl
#define int long long
const int Mod=1e9+7;
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc; cin>>tc;
    while(tc--)
    {
        int n,m; cin >> n >> m;
        vector<int>v(n);
        for(auto &x:v) cin >> x;
        sort(v.rb, v.re);
        int j=v[0]+1; //possible next position of next person
                      //assumed, 1st person placed at j=0 position
        int k=m-v[0]; //booked k to m position for 1st person
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if(j<k) //checked seating possibility at next position of next person
            {
                j+=v[i]+1;
            }
            else
            {
                flag=false;
                break;
            }
        }
        flag? yes : no;
        nl;
    }
    return 0;
}

