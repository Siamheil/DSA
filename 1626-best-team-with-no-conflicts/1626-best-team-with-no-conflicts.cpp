class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>>agescore;
        int n=ages.size();
        for(int i=0;i<n;i++){
            agescore.push_back({ages[i],scores[i]});
        }
        int ans=0;
        sort(agescore.begin(),agescore.end());
        vector<int>dp(n,0);
        for(int i=0;i<n;i++){
            for(int j=i;j>=0;j--){
                if(agescore[i].second>=agescore[j].second){
                    dp[i]=max(dp[i],dp[j]+agescore[i].second);
                }
                ans=max(ans,dp[i]);
            }
        }
        return ans;
    }
};