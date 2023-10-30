#include <bits/stdc++.h>
class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> e,o;
        string nu = to_string(num);
        for(int i = 0;i<nu.length();i++)
        {
            if((nu[i]-'0')%2==0)
            {
                e.push(nu[i]-'0');
            }
            else
            {
                o.push(nu[i]-'0');
            }
        }
        int ans = 0;
        for(int i=0;i<nu.size();i++)
        {
            if((nu[i]-'0')%2==0)
            {
                ans = ans*10+e.top();
                e.pop();
            }
            else
            {
                ans = ans*10+o.top();
                o.pop();
            }
        }
        return ans;
    }
};