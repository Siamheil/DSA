class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        string ans = "";
        for (char ch : s) {
            if (ans.empty() || ans.back() != ch) {
                ans.push_back(ch); 
            }
        }
        return ans;
    }
};
