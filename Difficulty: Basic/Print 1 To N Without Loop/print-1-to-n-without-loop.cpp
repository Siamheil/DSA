class Solution {
  public:
    void printNos(int n) {
        // Code here
        if(n==0) return;
        printNos(n-1);
        cout<<n<<" ";
    }
};