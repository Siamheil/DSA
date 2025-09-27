class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        int n=s.size();
        int start=0,end=n-1;
        while(start<end){
            while((start<end) && !isalnum(s[start])) start++;
            while((start<end) && !isalnum(s[end])) end--;
            if(tolower(s[start])!=tolower(s[end])) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};