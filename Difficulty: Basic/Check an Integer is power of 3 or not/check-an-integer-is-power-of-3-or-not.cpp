class Solution {
  public:
    string isPowerof3(int N) {
        // code here
        if(N<1) return "No";
        while(N%3==0){
            N=N/3;
        }
        return (N==1) ? "Yes":"No";
    }
};