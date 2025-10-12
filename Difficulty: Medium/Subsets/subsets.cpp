class Solution {
  public:
  
    void subsequence(vector<int>& arr,int index,int n,vector<vector<int>>&ans,vector<int>temp){
        if(index==n){
            ans.push_back(temp);
            return;
        }
        subsequence(arr,index+1,n,ans,temp);
        temp.push_back(arr[index]);
        subsequence(arr,index+1,n,ans,temp);
    }  
  
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp;
        int n=arr.size();
        subsequence(arr,0,n,ans,temp);
        return ans;
    }
};