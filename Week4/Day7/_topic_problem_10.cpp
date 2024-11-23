//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k)
    {
        map<char,int>m;
        int l=0,r=0, ans=-1;
        while(r<s.size())
        {
            m[s[r]]++;
            if(m.size()==k)
            {
                ans = max(ans, r-l+1);
            }
            while(m.size()>k)
            {
                m[s[l]]--;
                if(m[s[l]]==0) m.erase(s[l]);
                l++;
            }
            r++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends
