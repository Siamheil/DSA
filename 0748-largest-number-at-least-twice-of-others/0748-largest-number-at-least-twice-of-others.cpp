class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int maxidx=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[maxidx]){
                maxidx = i;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=maxidx && nums[maxidx]<2*nums[i]){
                return -1;
            }
        }
        return maxidx;
    }
};