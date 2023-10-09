class Solution {
public:
    int heightChecker(vector<int>& h) {
        int c = 0;
        vector<int> k;
        k=h;
        sort(k.begin(),k.end());
        for(int i =0;i<h.size();i++)
        {
            if(h[i]!=k[i])
            {
                c++;
            }
        }
        return c;

        
    }
};