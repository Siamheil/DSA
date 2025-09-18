class Solution {
  public:
    void arrayTraversalReverse(int numbers[], int size) {
        // Code here
        for(int i=size-1;i>=0;i--){
            cout<<numbers[i]<<" ";
        }
    }
};