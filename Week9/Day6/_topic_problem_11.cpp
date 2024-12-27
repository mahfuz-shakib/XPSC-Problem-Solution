
/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
const int Mod=1e9+7;
bool prime(int x)
{
    if(x==1) return false;
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)return false;
    }
    return true;
}
void Good_Bye_2024()
{
    int l,r;
    cin >> l >> r;
    if(r>3)
    {
        int a,b;
        bool flag=false;
        if(r==l)
        {
            if(!prime(r))
            {
                for(int i=2; i<=r; i++)
                {
                    if(r%i==0)
                    {
                        a=i,b=r-i;
                        flag=true;
                        break;
                    }
                }
            }
            if(flag) cout<<a<<" "<<b;
            else cout <<-1;
        }
        else
        {
            a=2,b=r-2;
            if(r%2)b--;
            cout<<a<<" "<<b;
        }

    }
    else cout << -1;
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        Good_Bye_2024();
        cout<<endl;
    }
    return 0;
}

