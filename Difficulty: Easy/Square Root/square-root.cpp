class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int start=0;
        int end=n;
        int ans=1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid*mid==n){
                return mid;
            }else if(mid*mid<n){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};