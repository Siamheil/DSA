class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int n=arr.size();
        vector<int>ans(n,-1);
        stack<int>st;
        st.push(0);
        for(int i=1;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                ans[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};