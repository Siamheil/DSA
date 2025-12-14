class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxksum=0;
        for(int i=n-k;i<n;i++){
            maxksum+=nums[i];
        }
        int minksum=0;
        for(int i=0;i<k;i++){
            minksum+=nums[i];
        }
        return abs(maxksum-minksum);
    }
};