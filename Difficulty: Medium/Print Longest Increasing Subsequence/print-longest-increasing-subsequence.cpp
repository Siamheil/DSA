class Solution {
  public:
    vector<int> getLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        vector<int>parent(n,-1);
        int lis=1;
        int lisidx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    if(dp[j]+1>dp[i]){
                        dp[i]=dp[j]+1;
                        parent[i]=j;
                        if(lis<dp[i]){
                            lis=dp[i];
                            lisidx=i;
                        }
                    }
                }
            }
        }
        vector<int>result;
        while(lisidx!=-1){
            result.push_back(nums[lisidx]);
            lisidx=parent[lisidx];
        }
        reverse(result.begin(),result.end());
        return result;
    }
};