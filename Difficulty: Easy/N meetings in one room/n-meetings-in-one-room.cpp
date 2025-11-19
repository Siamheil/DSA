class Solution {
public:
    static bool cmp(pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    }

    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();
        vector<pair<int, int>> meetings;
        for (int i = 0; i < n; i++) {
            meetings.push_back({start[i], end[i]});
        }
        sort(meetings.begin(), meetings.end(), cmp);

        int count = 1;
        int lastEnd = meetings[0].second;
        for (int i = 1; i < n; i++) {
            if (meetings[i].first > lastEnd) {
                count++;
                lastEnd = meetings[i].second;
            }
        }
        return count;
    }
};