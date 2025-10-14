class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(!isdigit(s[i])) ans=ans+s[i];
            else ans.pop_back();
        }
        return ans;
    }
};