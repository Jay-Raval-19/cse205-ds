class Solution {
public:
    vector<vector<int>> ans;
    
    void sub(vector<int> temp, int i, vector<int>& nums) {
        ans.push_back(temp);
        for (int j = i; j < nums.size(); j++) {
            if (j > i && nums[j] == nums[j - 1]) {
                continue;
            }
            temp.push_back(nums[j]);
            sub(temp, j + 1, nums);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        sub(temp, 0, nums);
        return ans;
    }
};