// User function Template for C++

class Solution {
  public:
    int isRepresentingBST(int arr[], int N) {
        // code here
        for(int i=0;i<N-1;i++){
            if(arr[i]>arr[i+1]){
                return 0;
            }
        }
        return 1;
    }
};