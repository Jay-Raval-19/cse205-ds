class Solution {
public:
    vector<vector<int>> ans;
    void perm(vector<int> &nums,int x,vector<int>&temp)
    {
        if(x==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(temp[i]==11)
            {
                temp[i]=nums[x];
                perm(nums,x+1,temp);
                temp[i]=11;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp(n,11);
        perm(nums,0,temp); 
        return ans;
    }
};