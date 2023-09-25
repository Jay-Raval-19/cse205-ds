class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> s;
        for(int i=0;i<op.size();i++)
        {
            if(op[i]=="C" && !s.empty())
            {
                s.pop();
            }
            else if(op[i]=="D" && !s.empty())
            {
                int a = s.top();
                a=a*2;
                s.push(a);
            }
            else if(op[i]=="+")
            {
                if(s.size()>=2)
                {
                int k = s.top();
                s.pop();
                int p = s.top();
                s.push(k);
                s.push(k+p);
                }
            }
            else
            {
                s.push(stoi(op[i]));
            }
        }
        int sum = 0;
        while(!s.empty())
        {
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};