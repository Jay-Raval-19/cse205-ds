class Solution {
public:

    void combsum(vector<int>& candidates, int next, vector<int>& temp, int target, vector<vector<int> >& ans)
    {
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }
        if(next == candidates.size() || target - candidates[next] < 0)
            return;   
        temp.push_back(candidates[next]);
        combsum(candidates, next,temp, target - candidates[next], ans);
        temp.pop_back();
        combsum(candidates, next + 1, temp, target, ans);
    }

    
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) 
    {
        vector<vector<int> > ans;
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        combsum(candidates, 0, temp, target, ans);
        return ans;    
    }
};