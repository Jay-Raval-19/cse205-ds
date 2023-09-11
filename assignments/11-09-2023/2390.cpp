class Solution {
public:
    string removeStars(string s) {
        stack<char> s1;
        for(auto l:s)
        {
            if(l=='*')
            {
                if(!s1.empty())
                {
                    s1.pop();
                }
            }
            else
            {
                s1.push(l);
            }
        }
        string ans;
        while(!s1.empty())
        {
            char k = s1.top();
            ans+=k;
            s1.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};