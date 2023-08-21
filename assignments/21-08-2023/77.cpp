class Solution {
public:
    vector<vector<int>> ans;
    void getSubsets(int n,int k, int x, vector<int>&temp){
    if(x >= n && temp.size() < k)
        return;
    if(temp.size()==k){
        ans.push_back(temp);
        return;
    }
    
    temp.push_back(x+1);
    getSubsets(n,k,x+1,temp);
    temp.pop_back();
    getSubsets(n,k,x+1,temp);

}

vector<vector<int>> combine(int n, int k) {
    vector<int>temp;
    getSubsets(n,k,0, temp);
    return ans;
}
};