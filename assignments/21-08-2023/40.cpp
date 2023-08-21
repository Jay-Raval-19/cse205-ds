class Solution {
public:
    void combsum(vector<int>& candidates, int next, vector<int>& temp, int target, vector<vector<int> >& ans)
    {
        if(target == 0)
        {
            ans.emplace_back(temp);
            return;
        }
        for(int i=next;i<candidates.size();i++)
        {
            if(candidates[i]>target)
            {
                break;
            }
            if(i>next && candidates[i]==candidates[i-1])
            {
                continue;
            }    
            temp.push_back(candidates[i]);
            combsum(candidates, i+1,temp, target - candidates[i], ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int> > ans;
        sort(candidates.begin(), candidates.end());
        vector<int> temp; 
        combsum(candidates,0,temp,target,ans);
        return ans;
    }
};