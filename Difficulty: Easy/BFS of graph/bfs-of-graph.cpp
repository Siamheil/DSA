class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        int V=adj.size();
        queue<int>q;
        vector<bool>visited(V,false);
        q.push(0);
        visited[0]=true;
        vector<int>ans;
        int node;
        while(!q.empty()){
            node=q.front();
            q.pop();
            ans.push_back(node);
            for(int j=0;j<adj[node].size();j++){
    int neighbor = adj[node][j];
    if(!visited[neighbor]){
        visited[neighbor]=true;
        q.push(neighbor);
    }
}
        }
        return ans;
    }
};