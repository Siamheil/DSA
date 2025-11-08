class Solution {
  public:
    int numberOfSubarrays(vector<int>& arr, int target) {
        int count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        for(int num:arr){
            sum+=num;
            if(mp.count(sum-target))
            count+=mp[sum-target];
            mp[sum]++;
        }
        return count;
    }
};