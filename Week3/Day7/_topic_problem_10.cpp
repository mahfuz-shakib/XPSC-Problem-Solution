//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) 
	{
	 int i=0,c=0;
	 vector<int>v(26,0),d(26,0);
	 for(int i=0;i<pat.size();i++)
	 {
	     v[pat[i]-'a']++;
	     d[txt[i]-'a']++;
	 }
	 if(v==d)c++;
	 for(int i=pat.size();i<txt.size();i++)
	 {
	     d[txt[i]-'a']++;
	     d[txt[i-pat.size()]-'a']--;
	     if(v==d)c++;
	 }
	 return c;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends