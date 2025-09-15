class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // Your code goes here
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                return i;
            }
        }
        return -1;
    }
};