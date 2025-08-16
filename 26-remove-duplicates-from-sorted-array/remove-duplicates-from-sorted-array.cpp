class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        int i = 0; // pointer for unique elements
        for(int j = 1; j < n; j++) {
            if(nums[i] != nums[j]) {   // ✅ compare with last unique
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
