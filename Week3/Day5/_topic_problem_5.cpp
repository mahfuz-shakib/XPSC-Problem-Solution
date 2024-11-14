//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) 
    {
        deque<int>a;
        vector<int>b;
        int l=0,r=0;
        while(r<arr.size())
        {
            if(arr[r]<0)a.push_back(arr[r]);
            if(r-l+1==k)
            {
                if(a.size()==0)
                {
                    b.push_back(0);
                }
                else 
                {
                    b.push_back(a[0]);
                    if(arr[l]==a[0])
                    {
                        a.pop_front();
                    }
                }
                l++;
            }
            r++;
        }
        return b;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends