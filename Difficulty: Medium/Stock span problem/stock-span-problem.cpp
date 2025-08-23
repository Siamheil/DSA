class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);   // resize to n
        stack<int> st;        // stack stores indices

        for(int i = 0; i < n; i++) {
            // Pop elements smaller or equal to arr[i]
            while(!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }

            // If stack becomes empty => no greater element to left
            if(st.empty()) {
                ans[i] = i + 1;
            } else {
                ans[i] = i - st.top();
            }

            // Push current index
            st.push(i);
        }

        return ans;
    }
};
