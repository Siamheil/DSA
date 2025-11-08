class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,
                                            long long k) 
    {
        if(k<=1) return 0;
        long long count=0;
        int start=0;
        long long prod=1;
        for(int end=0;end<n;end++){
            prod=prod*arr[end];
            while(prod>=k&&start<=end){
                prod=prod/arr[start];
                start++;
            }
            count+=end-start+1;
        }
        return count;
    }                                        
};