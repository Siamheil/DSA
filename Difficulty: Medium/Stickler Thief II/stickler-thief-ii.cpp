class Solution {
  public:
    int solve(vector<int>&arr,int i,int end,vector<int>&dp){
        if(i>end) return 0;
        if(dp[i]!=-1) return dp[i];
        int skip=solve(arr,i+1,end,dp);
        int steal=arr[i]+solve(arr,i+2,end,dp);
        return dp[i]=max(skip,steal);
    }
    int maxValue(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp1(n+1,-1),dp2(n+1,-1);
        if(n==1) return arr[0];
        if(n==2) return max(arr[0],arr[1]);
        int take_0th_house=solve(arr,0,n-2,dp1);
        int take_1th_house=solve(arr,1,n-1,dp2);
        return max(take_0th_house,take_1th_house);
    }
};
