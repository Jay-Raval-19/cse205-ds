class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m_sum = 0;
        int sum = 0;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[0].size();j++)
            {
                sum+=accounts[i][j];
            }
            m_sum = max(m_sum,sum);
            sum = 0;
        }
        return m_sum;
    }
};