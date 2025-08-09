// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        
        for(int i=0;i<arr.size();i++){
            //stack is empty
            if(st.empty()){
                st.push(arr[i]);
            }
            //non negative integer
            else if(arr[i]>=0){
                // non negative integer
                if(st.top()>=0)
                st.push(arr[i]);
                else
                st.pop();
            }
            // negative number
            else{
                // negative
                if(st.top()<0){
                    st.push(arr[i]);
                }else
                st.pop();
            }
            
        }
        
        vector<int>ans(st.size());
        int i=st.size()-1;
        while(!st.empty()){
            ans[i]=st.top();
            i--;
            st.pop();
        }
        return ans;
    }
};