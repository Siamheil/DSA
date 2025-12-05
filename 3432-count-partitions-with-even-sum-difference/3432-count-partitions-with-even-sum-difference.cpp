class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        if(sum%2==0) return n-1;
        else return 0;
    }
};