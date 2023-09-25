class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time=0;
        queue<int> q;
        int n=tickets.size();
        for(int i=0;i<n;i++)
        {
            q.push(i);
        } 
        while(1)
        {
            if(tickets[k]==0)
            {
                break;
            } 
            int f=q.front();
            time++;
            tickets[f]--;
            q.pop();
            if(tickets[f]!=0) 
            {
                q.push(f);
            }
        }
        return time;
    }
};