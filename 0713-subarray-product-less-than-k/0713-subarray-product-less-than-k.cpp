class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int count=0;
        long long prod=1;
        int n=nums.size();
        int start=0;
        for(int end=0;end<n;end++)
        {
            prod=prod*nums[end];
            while(prod>=k&&start<=end){
                prod/=nums[start];
                start++;
            }
            count+=end-start+1;
        }
        return count;
    }
};