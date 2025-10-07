class Solution {
  public:
    void printNos(int N) {
        // code here
        if(N==0) return;
        cout<<N<<" ";
        printNos(N-1);
    }
};