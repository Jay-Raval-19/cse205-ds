class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto l:nums)
        {
            pq.push(-1*l);
            if(pq.size()>2)
            {
                pq.pop();
            }
        }
        int a = pq.top();
        pq.pop();
        return (a+1)*(pq.top()+1);
        
    }
};