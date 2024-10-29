// ~ Bismillahir Rahmanir Rahim ~
//      ~ Rabbi Zidni Ilma ~

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int q; cin>>q;
    map<string,string>old_map,new_map;
    for(int i=0;i<q;i++)
    {
        string old,neww;
        cin>>old>>neww;
        if(old_map.find(old)!=old_map.end())
        {
            string most_old=old_map[old];
            old_map.erase(old);
            old_map[neww]=most_old;
            new_map[most_old]=neww;
        }
        else
        { 
            new_map[old]=neww; 
            old_map[neww]=old;
        }
    } 
    cout<<new_map.size()<<endl;
    for(auto [old,neww]:new_map)
    {
        cout<<old<<" "<<neww<<endl;
    }
    return 0;
}

