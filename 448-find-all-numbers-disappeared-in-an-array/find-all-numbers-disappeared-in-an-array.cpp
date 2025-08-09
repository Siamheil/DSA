class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[abs(nums[i]) - 1] < 0) continue;
            nums[abs(nums[i]) - 1] *= -1; 
        }

        int index = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) nums[index++] = i + 1;
        }

        for (int i = index; i < n; i++) {
           nums.pop_back();
        }

        return nums;
    }
};