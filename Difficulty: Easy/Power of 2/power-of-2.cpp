class Solution {
public:
    bool isPowerofTwo(int n) {
        if(n==0) return false;
        return ((n==1) || (n%2==0 && isPowerofTwo(n/2)));
    }
};