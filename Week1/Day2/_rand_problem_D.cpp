#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; cin >> x;
    string s = to_string(x);
    int z=s.size();
    s.insert(s.begin()+0,4-z,'0');
    cout<<s;
    return 0;
}