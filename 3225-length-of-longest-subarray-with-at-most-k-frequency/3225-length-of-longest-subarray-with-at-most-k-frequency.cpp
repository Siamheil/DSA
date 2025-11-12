class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        int start=0,end=0;
        int n=nums.size();
        int length=0;
        while(end<n){
            count[nums[end]]++;
            while(count[nums[end]]>k){
                count[nums[start]]--;
                start++;
            }
            length=max(length,end-start+1);
            end++;
        }
        return length;
    }
};