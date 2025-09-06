class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxProduct=nums[n-1]*nums[n-2];
        int minProduct=nums[0]*nums[1];
        int ans = maxProduct - minProduct;
        return ans;
    }
};