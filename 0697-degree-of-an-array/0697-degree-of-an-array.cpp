class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> count , left, right;
        int degree = 0;
        for(int i = 0; i < nums.size(); i++){
            if(left.find(nums[i]) == left.end()) left[nums[i]] = i;
            right[nums[i]] = i;
            count[nums[i]]++;
            degree = max(degree,count[nums[i]]);
        }
        int min_length = nums.size();
        for(auto& [num , freq] : count){
            if(freq == degree){
                min_length = min(min_length, right[num] - left[num] + 1);
            }
        }
        return min_length;
    }
};