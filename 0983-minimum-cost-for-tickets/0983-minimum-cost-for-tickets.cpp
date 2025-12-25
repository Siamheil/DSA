class Solution {
public:
    int solve(int i,vector<int>&days,vector<int>&costs,int n,vector<int>&dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int cost1=costs[0]+solve(i+1,days,costs,n,dp);
        int j=i;
        int max_days=days[i]+7;
        while(j<n && days[j]<max_days) j++;
        int cost7=costs[1]+solve(j,days,costs,n,dp);
        j=i;
        max_days=days[i]+30;
        while(j<n && days[j]<max_days) j++;
        int cost30=costs[2]+solve(j,days,costs,n,dp);
        return dp[i]=min({cost1,cost7,cost30});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector<int>dp(n+1,-1);
        return solve(0,days,costs,n,dp);
    }
};