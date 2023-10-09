class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int c_dif = arr[0],l_dif = INT_MAX;
        for(int i =1;i<arr.size();i++)
        {
            int c_dif = arr[i]-arr[i-1];
            if(l_dif == c_dif)
            {
                ans.push_back({arr[i-1],arr[i]});
            }
            else if(l_dif>c_dif)
            {
                ans.clear();
                l_dif = c_dif;
                ans.push_back({arr[i-1],arr[i]}); 
            }
        }
        return ans;
        
    }
};