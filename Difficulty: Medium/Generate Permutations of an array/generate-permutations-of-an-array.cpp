class Solution {
  public:
    void solve(vector<int>&arr,vector<int>temp,vector<vector<int>>&ans,vector<bool>visited){
        if(arr.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<arr.size();i++){
            if(visited[i]==0){
                visited[i]=1;
                temp.push_back(arr[i]);
                solve(arr,temp,ans,visited);
                visited[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>temp;
        vector<vector<int>>ans;
        vector<bool>visited(n,0);
        solve(arr,temp,ans,visited);
        return ans;
    }
};