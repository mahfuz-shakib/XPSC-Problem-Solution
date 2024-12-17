/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
#define Mahfuz_Shakib ios_base:: sync_with_stdio(0); cin.tie(0);

#define int long long
void Dekhen_Ja_Bhalo_Mone_Hoy()
{
    int n; cin >> n;
	int x=n;
	vector<int>v;
	while(x!=0)
	{
	   v.push_back(x%2);
	   x=x>>1;
	}
	int i,c=0,j=0;
	for(i=v.size()-1;i>=0;i--)
	{
	   if(v[i]==1)   j++;
	   else
	   {
	       if(j>1)  c++;
	   }
	}
	cout<< (1<<c);
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
        cout<<endl;
    }
    return 0;
}
