class Solution {
  public:
    int isPowerOfFour(unsigned int n) {
        // Your code goes here
        if(n<1) return 0;
        while(n%4==0){
            n=n/4;
        }
        return n==1;
    }
};