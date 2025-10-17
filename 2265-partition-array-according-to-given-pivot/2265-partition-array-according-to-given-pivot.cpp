class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lesser,equal,greater;
        for(int num:nums){
            if(num<pivot) lesser.push_back(num);
            else if(num==pivot) equal.push_back(num);
            else greater.push_back(num);
        }
        vector<int>result;
        for(int num:lesser) result.push_back(num);
        for(int num:equal) result.push_back(num);
        for(int num:greater) result.push_back(num);
        return result;
    }
};