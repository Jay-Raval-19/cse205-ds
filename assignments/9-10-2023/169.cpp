class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int k = ceil(n/2);
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int g=0;
        for(auto it:m){
        if(it.second > k)
        {
            g=it.first;
        }  
        }
        return g;
    }
};