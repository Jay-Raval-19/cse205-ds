class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        sort(s.rbegin(),s.rend());
        int n = s.size();
        priority_queue<int> q;
        for(auto l:s)
        {
            q.push(l);
        }
        while(q.size()!=1)
        {
            int a  = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            if(a==b)
            {
                if(q.size()==0)
                {
                    break;
                }
                continue;
            }
            if(a>b || b>a)
            {
                int smash = abs(a-b); 
                q.push(smash);
            }
        } 
        if(q.size()==1)
        {
            return q.top();
        }
        else
        {
            return 0;
        }
        
    }
};