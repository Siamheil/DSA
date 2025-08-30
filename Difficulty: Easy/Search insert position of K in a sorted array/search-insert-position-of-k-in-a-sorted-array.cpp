class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int start=0,end=n-1;
        int ans=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>=k){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};