class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n=arr.size();
        int start=0,end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[end]) start=mid+1;
            else end=mid;
        }
        return arr[end];
    }
};