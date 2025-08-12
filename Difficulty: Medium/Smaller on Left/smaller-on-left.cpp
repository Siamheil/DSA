class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        int n = arr.size();
        vector<int>ans(n,0);
        stack<int>st;
        
        for(int i =0;i<n;i++){
            while(st.size() >0 && st.top() >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }
            st.push(arr[i]);
        }
        return ans;
        
    }
};