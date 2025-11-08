class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long maxproduct=nums[0];
        for(int i=0;i<nums.size();i++){
            long long prod=1;
            for(int j=i;j<nums.size();j++){
                prod=prod*nums[j];
                maxproduct=max(maxproduct,prod);
            }
        }
        return maxproduct;
    }
};