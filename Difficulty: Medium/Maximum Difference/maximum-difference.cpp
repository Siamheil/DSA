class Solution {
public:
    int findMaxDiff(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<int> s;

        // Find nearest smaller to left
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && s.top() >= arr[i]) s.pop();
            left[i] = s.empty() ? 0 : s.top();
            s.push(arr[i]);
        }

        // Clear stack for right scan
        while (!s.empty()) s.pop();

        // Find nearest smaller to right
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && s.top() >= arr[i]) s.pop();
            right[i] = s.empty() ? 0 : s.top();
            s.push(arr[i]);
        }

        int res = 0;
        for (int i = 0; i < n; ++i) {
            res = max(res, abs(left[i] - right[i]));
        }
        return res;
    }
};