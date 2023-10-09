class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int n=arr.size(),b=arr.size(),ans=0;
        vector<int> v;
        for(auto i:m)
        {
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--)
        {
            b-=v[i];
            if(b<=(n/2))
            {
                ans+=1;
                break;
            }
            else    ans++;
        }
        return ans;
        
    }
};