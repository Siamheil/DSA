class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        if(s.length()!=t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};