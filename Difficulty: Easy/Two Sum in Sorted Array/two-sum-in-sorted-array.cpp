class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int start=0,end=n-1;
        while(start<end){
            int sum=arr[start]+arr[end];
            if(sum==target){
                return {start+1,end+1};
            }else if(sum<target){
                start++;
            }else{
                end--;
            }
        }
        return {-1,-1};
    }
};