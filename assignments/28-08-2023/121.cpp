class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m_sum=0,c_sum=prices[0];
        if(prices.size()==0 || prices.size()<2)
        {
            return 0;
        }
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
            {
                m_sum=max(m_sum,prices[i]-c_sum);
            }
            else
            {
                c_sum=min(c_sum,prices[i]);
            }
        }
        return m_sum;        
    }
};