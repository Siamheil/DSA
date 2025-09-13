class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int>ans;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1])
            ans.push_back(arr[i]);
        }
        return ans;
    }
};