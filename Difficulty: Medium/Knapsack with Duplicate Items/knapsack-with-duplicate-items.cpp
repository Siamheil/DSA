class Solution {
  public:
    int solve(int index,int capacity,vector<int>& val, vector<int>& wt,
    vector<vector<int>>&dp){
        if(index==0){
            return ((int)(capacity/wt[0]))*val[0];
        }
        if(dp[index][capacity]!=-1) return dp[index][capacity];
        int nottake=solve(index-1,capacity,val,wt,dp);
        int take=INT_MIN;
        if(wt[index]<=capacity)
        take=val[index]+solve(index,capacity-wt[index],val,wt,dp);
        return dp[index][capacity]=max(nottake,take);
    }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n=val.size();
        vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
        return solve(n-1,capacity,val,wt,dp);
    }
};