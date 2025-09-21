class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        int n = arr.size();
        stack<int> st;
        int maxArea = 0;
        int i = 0;
        while(i < n) {
            if(st.empty() || arr[i] >= arr[st.top()]) {
                st.push(i++);
            } else {
                int top = st.top();
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                int area = arr[top] * width;
                maxArea = max(maxArea, area);
            }
        }
        while(!st.empty()) {
            int top = st.top();
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            int area = arr[top] * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};