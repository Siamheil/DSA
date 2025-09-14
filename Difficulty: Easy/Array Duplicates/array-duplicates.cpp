class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i-1]){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};