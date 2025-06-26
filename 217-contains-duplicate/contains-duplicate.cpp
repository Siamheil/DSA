class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>megaSet;
        for(int i=0;i<nums.size();i++){
            if(megaSet.count(nums[i])){
                return true;
            }
            megaSet.insert(nums[i]);
        }
        return false;
    }
};