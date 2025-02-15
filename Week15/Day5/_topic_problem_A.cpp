class Solution
{
public:
    void permut(vector<int>& nums,vector<bool>visited,vector<vector<int>>&ans,vector<int>&tmp)
    {
        if(tmp.size()==visited.size())
        {
            ans.push_back(tmp);
            return;
        }
        for(int i=0; i<visited.size(); i++)
        {
            if(visited[i]==0)
            {
                visited[i]=1;
                tmp.push_back(nums[i]);
                permut(nums,visited,ans,tmp);
                visited[i]=0;
                tmp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>>ans;
        vector<bool>visited(nums.size(),0);
        vector<int>tmp;
        permut(nums,visited,ans,tmp);
        return ans;
    }
};
