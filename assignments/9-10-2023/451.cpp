class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(auto l:s)
        {
            m[l]++;
        }
        sort(s.begin(),s.end(),[&](char a,char b)
        {
            if(m[a]==m[b])
            {
                return a<b;
            }
            return m[a]>m[b];
        });
        string ans;
        for(auto l:s)
        {
            ans+=l;
        }
        return ans;
    }
};