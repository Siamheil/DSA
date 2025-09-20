// User function Template for C++

class Solution {
  public:
    void clonestack(stack<int> st, stack<int>& cloned) {
        // code here
        stack<int>temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        while(!temp.empty()){
            cloned.push(temp.top());
            temp.pop();
        }
    }
};