class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;// can change into map, but not suggest
        const int n=nums.size();
        if (n==1) return 0;
        for(int x: nums){
            freq[x]++;
        }
        if (freq.size()==1) return 0;
        int maxLen=0;
        for (auto& [x, f]: freq){
            if (freq.count(x-1)) maxLen=max(maxLen, f+freq[x-1]);
        }
        return maxLen;
    }
};