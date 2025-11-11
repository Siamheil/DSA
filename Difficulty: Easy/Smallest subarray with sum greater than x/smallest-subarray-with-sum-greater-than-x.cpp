class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int total=INT_MAX;
        int sum=0;
        int start=0;
        for(int end=0;end<arr.size();end++){
            sum=sum+arr[end];
            while(sum>x){
                total=min(total,end-start+1);
                sum=sum-arr[start];
                start++;
            }
        }
        return total==INT_MAX?0:total;
    }
};