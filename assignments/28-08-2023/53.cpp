class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m_sum=nums[0],c_sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            c_sum=max(nums[i],c_sum+nums[i]);
            m_sum=max(c_sum,m_sum);
        }
        return m_sum;
    }
};