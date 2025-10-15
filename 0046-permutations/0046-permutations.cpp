class Solution {
public:
    void solve(vector<int>&nums,vector<int>temp,vector<vector<int>>&ans,vector<bool>visited){
        if(nums.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(visited[i]==0){
                visited[i]=1;
                temp.push_back(nums[i]);
                solve(nums,temp,ans,visited);
                visited[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        vector<bool>visited(n,0);
        solve(nums,temp,ans,visited);
        return ans;
    }
};