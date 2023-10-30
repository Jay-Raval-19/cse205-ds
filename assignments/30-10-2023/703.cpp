class KthLargest {
public:
    priority_queue<int> pq;
    int a;
    KthLargest(int k, vector<int>& nums) {
        this->a = k;
        for(auto l:nums)
        {
            pq.push(-l);
            if(pq.size()>a)
            {
                pq.pop();
            }
        }
        
    }
    
    int add(int val) {
        pq.push(-val);
        if(pq.size()>a)
        {
            pq.pop();
        }
        return -pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */