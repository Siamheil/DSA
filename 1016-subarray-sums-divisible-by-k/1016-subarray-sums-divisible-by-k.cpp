class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int total=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int prefixsum=0,rem;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            rem=prefixsum%k;
            if(rem<0)
            rem=rem+k;
            if(mp.count(rem)){
                total+=mp[rem];
                mp[rem]++;
            }else{
                mp[rem]++;
            }
        }
        return total;
    }
};