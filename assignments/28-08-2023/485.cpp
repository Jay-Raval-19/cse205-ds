class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, k=0, i;
        for (i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 1) 
            {
                count++;        
            }
            else 
            {
            count = 0;
            }
            if (count > k) 
            {
                k=count;
            }
    }
    return k;
        
    }
};