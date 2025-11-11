class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int total=INT_MAX;
        int sum=0;
        int start=0;
        for(int end=0;end<nums.size();end++){
            sum=sum+nums[end];
            while(sum>=target){
                total=min(total,end-start+1);
                sum=sum-nums[start];
                start++;
            }
        }
        return total==INT_MAX? 0:total;
    }
};