
class Solution {
  public:
    bool isSubSequence(string A, string B) {
        // code here
        int i=0,j=0;
        while(i<A.size() && j<B.size()){
            if(A[i]==B[j]){
                i++;
            }
            j++;
        }
        return i==A.size();
    }
};