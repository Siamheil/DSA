class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int minEle=nums[0];
        int maxDiff=-1;
        for(int i=1;i<n;i++){
            if(nums[i]>minEle){
                maxDiff=max(maxDiff,nums[i]-minEle);
            }else{
                minEle=nums[i];
            }
        }
        return maxDiff;
    }
};