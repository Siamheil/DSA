class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        string ans1 = "";
        string ans2 = "";
        for(auto x:s){
            if(x == '#' and !st.empty()){
                st.pop();
            }else if(x == '#' and st.empty())
                continue;
            else
                st.push(x);
        }
        while(!st.empty()){
            ans1 += st.top();
            st.pop();
        }
        for(auto x:t){
            if(x == '#' and !st.empty()){
                st.pop();
            }else if(x == '#' and st.empty())
                continue;
            else
                st.push(x);
        }
        while(!st.empty()){
            ans2 += st.top();
            st.pop();
        }
        return ans1 == ans2;
    }
};