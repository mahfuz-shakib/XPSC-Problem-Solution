class Solution {
public:
bool isPalindrome(string &s, int l, int r)
{
    while(l<=r)
    {
        if(s[l++]!=s[r--])
        {
            return false;
        }
    }
    return true;
}
void func(int indx, vector<vector<string>>&ans, vector<string> &a, string &s,int n)
{
    if(indx==n)
    {
        ans.push_back(a);
    }
    for(int i=indx;i<n;i++)
    {
        if(isPalindrome(s,indx,i))
        {
            a.push_back(s.substr(indx, i-indx+1));
            func(i+1,ans,a,s,n);
            a.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>a;
        int n=s.size();
        func(0,ans,a,s,n);
        return ans;
    }
};
