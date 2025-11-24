class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>ans;
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(odd.rbegin(),odd.rend());
        sort(even.begin(),even.end());
        int evenidx=0,oddidx=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0) ans.push_back(even[evenidx++]);
            else ans.push_back(odd[oddidx++]);
        }
        return ans;
    }
};