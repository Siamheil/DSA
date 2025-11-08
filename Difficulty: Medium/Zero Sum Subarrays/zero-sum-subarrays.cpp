class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        int total=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int prefixSum=0;
        for(int i=0;i<arr.size();i++){
            prefixSum+=arr[i];
            if(mp.count(prefixSum)){
                total+=mp[prefixSum];
                mp[prefixSum]++;
            }else{
                mp[prefixSum]=1;
            }
        }
        return total;
    }
};