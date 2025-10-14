// User function Template for C++
class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int start=0,end=n-1;
        while(start<end){
            int sum=arr[start]+arr[end];
            if(sum==target) return {arr[start],arr[end]};
            else if(sum<target) start++;
            else end--;
        }
        return {};
    }
};