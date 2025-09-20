class Solution {
  public:
    bool divby13(string &s) {
        // code here
        int rem=0;
        for(char c:s){
            rem=(rem*10 + (c-'0'))%13;
        }
        return rem==0;
    }
};