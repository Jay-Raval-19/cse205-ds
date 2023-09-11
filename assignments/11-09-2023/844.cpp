class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        for(auto l:s)
        {
            if(l == '#')
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
        for(auto k:t)
        {
            if(k == '#')
            {
                if(!s2.empty())
                {
                    s2.pop();
                }
            }
            else
            {
                s2.push(k);
            }            
        }
        return s1==s2;   
    }
};