class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        if (n == 0) return {};

        priority_queue<pair<int,int>> pq;
        for (int i = 0; i < n; ++i) pq.push({score[i], i});

        vector<string> ans(n);
        int rank = 1;
        while (!pq.empty()) {
            auto [s, idx] = pq.top(); pq.pop();
            if (rank == 1) ans[idx] = "Gold Medal";
            else if (rank == 2) ans[idx] = "Silver Medal";
            else if (rank == 3) ans[idx] = "Bronze Medal";
            else ans[idx] = to_string(rank);
            ++rank;
        }
        return ans;
    }
};
