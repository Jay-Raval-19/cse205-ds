class Solution {
public:
    int minimumSum(int num) {
        vector<int> ans(4);
        for(int i=0;i<ans.size();i++){
            ans[i] = num%10;
            num = num/10;
        }
        sort(ans.begin(),ans.end());
        return ((ans[0]+ans[1])*10+ans[2]+ans[3]);
        
    }
};