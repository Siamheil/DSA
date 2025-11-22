class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        for(int x:nums){
            ans=ans+(x%3!=0);
        }
        return ans;
    }
};