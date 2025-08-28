class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int reverse=0;
        while(n>0){
            int last=n%10;
            reverse=reverse*10+last;
            n=n/10;
        }
        return reverse;
    }
};