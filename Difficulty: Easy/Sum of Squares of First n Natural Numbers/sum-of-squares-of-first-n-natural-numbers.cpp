// User function Template for C++
class Solution {
  public:
    int sumOfSquares(int n) {
        // code here
        if(n==1) return 1;
        return n*n+sumOfSquares(n-1);
    }
};