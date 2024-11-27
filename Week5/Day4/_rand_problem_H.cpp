/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n;
    cin >> n;
    int mat[n][n];
    int x=1,y=n*n,s=0,l=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<n; j++)
            {
                if(s==0)
                {
                    mat[i][j] = x;
                    x++;    s=1;    l=0;
                }
                else
                {
                    mat[i][j] = y;
                    y--;    s=0;    l=1;
                }
            }
        }
        else
        {
            for(int j=n-1; j>=0; j--)
            {
                if(s==0)
                {
                    mat[i][j] = x;
                    x++;    s=1;    l=0;
                }
                else
                {
                    mat[i][j] = y;
                    y--;    s=0;    l=1;
                }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << mat[i][j]<<" ";
        }
        cout << endl;
    }
}
signed main()
{
    Mahfuz_Shakib

    //int tc=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        Dekhen_Ja_Bhalo_Mone_Hoy();
        //cout<<endl;
    }
    return 0;
}


