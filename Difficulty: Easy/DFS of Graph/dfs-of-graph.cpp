class Solution {
  public:
    void dfs(int node,vector<vector<int>>& adj,vector<int>&ans,vector<bool>&visited){
        visited[node]=1;
        ans.push_back(node);
        for(int j=0;j<adj[node].size();j++){
            if(!visited[adj[node][j]]){
                dfs(adj[node][j],adj,ans,visited);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        int v=adj.size();
        vector<int>ans;
        vector<bool>visited(v,0);
        dfs(0,adj,ans,visited);
        return ans;
    }
};