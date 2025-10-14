// User function Template for C++

class Solution {
  public:
    string toLower(string& s) {
        // code here
        for(char &ch:s){
            if(ch>='A' && ch<='Z')
            ch=ch+32;
        }
        return s;
    }
};