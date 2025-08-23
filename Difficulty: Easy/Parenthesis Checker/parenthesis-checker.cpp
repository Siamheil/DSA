class Solution {
public:
    bool isBalanced(string& k) {
        stack<char> st;
        int n = k.size();

        for (int i = 0; i < n; i++) {
            // If opening bracket, push to stack
            if (k[i] == '(' || k[i] == '{' || k[i] == '[') {
                st.push(k[i]);
            } 
            else {
                // If stack is empty, no matching opening bracket
                if (st.empty()) return false;

                // Check for matching pair
                if ((st.top() == '(' && k[i] == ')') ||
                    (st.top() == '{' && k[i] == '}') ||
                    (st.top() == '[' && k[i] == ']')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        // If stack is empty, all brackets matched
        return st.empty();
    }
};
