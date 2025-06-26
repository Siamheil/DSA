class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int biggest=arr[0];
        for(int i=0;i<arr.size();i++){
            if (arr[i]>biggest){
                biggest=arr[i];
            }
        }
        return biggest;
    }
};
