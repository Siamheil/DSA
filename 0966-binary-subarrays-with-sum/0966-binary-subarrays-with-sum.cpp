class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        for(int num:nums){
            sum+=num;
            if(mp.count(sum-goal))
            count+=mp[sum-goal];
            mp[sum]++;
        }
        return count;
    }
};