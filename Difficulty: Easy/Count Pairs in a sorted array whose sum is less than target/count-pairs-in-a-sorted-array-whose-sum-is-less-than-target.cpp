// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        int n=arr.size();
        int start=0,end=n-1;
        int count=0;
        while(start<end){
            int sum=arr[start]+arr[end];
            if (sum < target) {
                count += (end - start);
                start++;
            }    
            else {
                end--;
            }
        }
        return count;
    }
};
