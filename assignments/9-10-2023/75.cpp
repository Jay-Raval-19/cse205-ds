class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n=nums.size();
		for(int i=1;i<n;i++)
	{
		bool swapped=false;
		for(int j=0;j<n-i;j++)
		{
			if(nums[j]>nums[j+1])
			{
				swap(nums[j],nums[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)
		{
			break;
		}
	}
    }
};