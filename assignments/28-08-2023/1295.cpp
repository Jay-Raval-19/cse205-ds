class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]<100) && (nums[i]>9))
                count=count+1;
            if((nums[i]>999) && (nums[i]<10000))
                count=count+1;
            if((nums[i]>99999)&&(nums[i]<1000000))
                count=count+1;
        }
        return count;
    }
};