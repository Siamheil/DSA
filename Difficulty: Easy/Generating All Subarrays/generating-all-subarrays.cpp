// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                vector<int>subarr;
                for(int k=i;k<=j;k++){
                    subarr.push_back(arr[k]);
                }
                ans.push_back(subarr);
            }
        }
        return ans;
    }
};