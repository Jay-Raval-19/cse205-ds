class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (const auto& i : nums) 
        {
            ++ m[i];
        }
        vector<pair<int, int>> p;
        for (auto it = m.begin(); it != m.end(); ++ it) 
        {
            p.emplace_back(-(it->second), it->first);
        }
        nth_element(p.begin(), p.begin() + k - 1, p.end());
        vector<int> result;
        for (int i = 0; i < k; i++) 
        {
            result.emplace_back(p[i].second);
        }
        return result;
    }
};