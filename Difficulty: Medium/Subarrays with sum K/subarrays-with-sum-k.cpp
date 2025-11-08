class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        int total=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int prefixsum=0;
        for(int i=0;i<arr.size();i++){
            prefixsum+=arr[i];
            if(mp.count(prefixsum-k)){
                total+=mp[prefixsum-k];
                mp[prefixsum]++;
            }else{
                mp[prefixsum]++;
            }
        }
        return total;
    }
};