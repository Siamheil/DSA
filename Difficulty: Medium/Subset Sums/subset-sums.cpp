class Solution {
  public:
    void solve(vector<int>&arr,int index,vector<int>&ans,int sum,int n){
        if(index==n){
            ans.push_back(sum);
            return;
        }
        
        solve(arr,index+1,ans,sum,n);
        solve(arr,index+1,ans,sum+arr[index],n);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        int n=arr.size();
        int sum=0;
        int index=0;
        vector<int>ans;
        solve(arr,0,ans,0,n);
        return ans;
    }
};