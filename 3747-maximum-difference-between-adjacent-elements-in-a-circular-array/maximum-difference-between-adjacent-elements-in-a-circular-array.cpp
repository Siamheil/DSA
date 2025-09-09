class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxDiff=0;
        for(int i=0;i<n;i++){
            maxDiff=max(maxDiff,abs(nums[i]-nums[(i+1)%n]));
        }
        return maxDiff;
    }
};