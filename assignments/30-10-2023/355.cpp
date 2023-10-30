class Twitter {
public:
    public:
    unordered_map<int, set<int>> f;
    unordered_map<int, vector<pair<int, int>> > m;
    int time;

    Twitter() {
        time = 0;
    }

    void postTweet(int userId, int tweetId) {
        m[userId].push_back({time++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int>> pq;
        vector<int> ans;

        for (auto l : m[userId]) {
            pq.push(l);
        }

        for (auto k : f[userId]) {
            for (auto j : m[k]) {
                pq.push(j);
            }
        }

        while (!pq.empty() && ans.size() < 10) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }

    void follow(int followerId, int followeeId) {
        f[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        f[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */