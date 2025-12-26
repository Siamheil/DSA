class Solution {
public:
    int n;
    vector<long long>dp;
    unordered_map<long long ,long long >mp;
    long long solve(vector<long long>&nums,int i){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        long long skip=solve(nums,i+1);
        int j=lower_bound(begin(nums)+i+1,end(nums),nums[i]+3)-begin(nums);
        long long take=nums[i]*mp[nums[i]]+solve(nums,j);
        return dp[i]=max(take,skip);
    }
    long long maximumTotalDamage(vector<int>& power) {
        
        for(int &x:power){
            mp[x]++;
        }
        vector<long long>nums;
        for(auto &it:mp){
            nums.push_back(it.first);
        }
        sort(nums.begin(),nums.end());
        n=nums.size();
        dp.assign(n+1,-1);
        return solve(nums,0);
    }
};