static int fast_io = []() { std::ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return 0; }();
class Solution {
public:
    int sumOfMultiples(int n) {
        int sum;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0||i%5==0||i%7==0)
            {
                sum+=i;
            }

        }
        return sum;
    }
};