// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.size();
        int start=0,end=n-1;
        while(start<end){
            int temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
        return s;
    }
};
