class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxcount=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]==0){
                count = 0;
            }
            else if(nums[i]==1){
                count++;
                maxcount=max(maxcount,count);
            }
        }
        return maxcount;
    }
};