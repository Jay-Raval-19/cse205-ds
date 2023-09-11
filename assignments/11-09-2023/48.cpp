class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> res(n,vector<int>(m,0));
        for(int i = 0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                res[j][i] = matrix[i][j];
            }
        }
        for(int k=0;k<res.size();k++)
        {
            reverse(res[k].begin(),res[k].end());
        }
        matrix = res;
    }
};