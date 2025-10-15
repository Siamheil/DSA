class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>positives;
        vector<int>negatives;
        for(int num:nums){
            if(num>0) positives.push_back(num);
            else negatives.push_back(num);
        }
        int n=positives.size();
        for(int i=0;i<n;i++){
            ans.push_back(positives[i]);
            ans.push_back(negatives[i]);
        }
        return ans;
    }
};