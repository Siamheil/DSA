class Solution {
  public:
    int findMagicalNumber(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==i){
                return arr[i];
                break;
            }
        }
        return -1;
    }
};