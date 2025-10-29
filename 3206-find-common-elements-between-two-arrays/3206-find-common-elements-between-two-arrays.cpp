class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1(nums1.begin(),nums1.end());
        unordered_set<int>set2(nums2.begin(),nums2.end());
        int answer1=0,answer2=0;
        for(int nums:nums1){
            if(set2.count(nums)) answer1++;
        }
        for(int nums:nums2){
            if(set1.count(nums)) answer2++;
        }
        return {answer1,answer2};
    }
};