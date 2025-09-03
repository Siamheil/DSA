class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1(begin(nums1),end(nums1));
        set<int>st2(begin(nums2),end(nums2));
        vector<int>v1;
        vector<int>v2;
        set_difference(begin(st1),end(st1),begin(st2),end(st2),back_inserter(v1));
        set_difference(begin(st2),end(st2),begin(st1),end(st1),back_inserter(v2));
        return {v1,v2};
    }
};